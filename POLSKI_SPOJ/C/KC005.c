#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    char *line = malloc(10000 * sizeof(char));
    while (fgets(line, 10000 * sizeof(char), stdin)) {
        if (line[6] < 'A' || line[6] > 'Z') {
            printf("0\n");
        } else {
            int pointer = 7;
            for (int i = 7; line[i] != ';'; i++) {
                if (line[i] < 97 || line[i] > 122) {
                    printf("0\n");
                    break;
                }
                pointer++;
            }
            if (line[pointer] == ';') {
                //pointer pokazuje na średnik po imieniu
                if (line[pointer + 12] < 'A' || line[pointer + 12] > 'Z') printf("1\n");
                else {
                    pointer = pointer + 13;
                    // pointer wskazuje na drugą literę nazwiska
                    for (int i = pointer; line[i] != ';'; i++) {
                        if (line[i] < 97 || line[i] > 122) {
                            printf("1\n");
                            break;
                        }
                        pointer++;
                    }
                    if (line[pointer] == ';') {
                        // pointer wskazuje na średnik po nazwisku
                        if (isdigit(line[pointer + 12]) == 0) printf("2\n");
                        else if (isdigit(line[pointer + 13]) == 0) printf("2\n");
                        else if (isdigit(line[pointer + 14]) == 0) printf("2\n");
                        else if (isdigit(line[pointer + 15]) == 0) printf("2\n");
                        else {
                            char year[4];
                            int yearNum;
                            year[0] = line[pointer + 12];
                            year[1] = line[pointer + 13];
                            year[2] = line[pointer + 14];
                            year[3] = line[pointer + 15];
                            sscanf(year, "%d", &yearNum);
                            //printf("%d", yearNum);
                            if (yearNum > 2000) printf("2\n");
                            else if (yearNum < 1900) printf("2\n");
                            else {
                                if (line[pointer + 16] != '-') printf("2\n");
                                else {
                                    if (isdigit(line[pointer + 17]) == 0) printf("2\n");
                                    else if (isdigit(line[pointer + 18]) == 0) printf("2\n");
                                    else {
                                        char month[2];
                                        int monthNum;
                                        month[0] = line[pointer + 17];
                                        month[1] = line[pointer + 18];
                                        sscanf(month, "%d", &monthNum);
                                        //printf("%d\n", (monthNum - yearNum) / 10000);
                                        if (((monthNum - yearNum) / 10000) < 1) printf("2\n");
                                        else if (((monthNum - yearNum) / 10000) > 12) printf("2\n");
                                        else {
                                            if (line[pointer + 19] != '-') printf("2\n");
                                            else {
                                                if (isdigit(line[pointer + 20]) == 0) printf("2\n");
                                                else if (isdigit(line[pointer + 21]) == 0) printf("2\n");
                                                else {
                                                    if (line[pointer + 20] == '0') printf("3\n");
                                                    else if (line[pointer + 20] == '1') printf("3\n");
                                                    else if (line[pointer + 20] == '2') printf("3\n");
                                                    else if (line[pointer + 20] == '3') {
                                                        if (line[pointer + 21] == '0') printf("3\n");
                                                        else if (line[pointer + 21] == '1') printf("3\n");
                                                        else printf("2\n");
                                                    } else printf("2\n");
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    free(line);
}
