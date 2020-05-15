#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// "ABCDEFGHIK" - "L       M       N       O       P       Q       R       S       T "


int main() {
    char *word = malloc(25 * sizeof(char));
    scanf("%s", word);
    int length = (int)strlen(word);
    int year = 0;
    for(int i = 0; i < length; i++){
        if(word[i] == 'a') year += 1;
        else if(word[i] == 'b') year += 2;
        else if(word[i] == 'c') year += 3;
        else if(word[i] == 'd') year += 4;
        else if(word[i] == 'e') year += 5;
        else if(word[i] == 'f') year += 6;
        else if(word[i] == 'g') year += 7;
        else if(word[i] == 'h') year += 8;
        else if(word[i] == 'i') year += 9;
        else if(word[i] == 'k') year += 10;
        else if(word[i] == 'l') year += 20;
        else if(word[i] == 'm') year += 30;
        else if(word[i] == 'n') year += 40;
        else if(word[i] == 'o') year += 50;
        else if(word[i] == 'p') year += 60;
        else if(word[i] == 'q') year += 70;
        else if(word[i] == 'r') year += 80;
        else if(word[i] == 's') year += 90;
        else if(word[i] == 't') year += 100;
        else if(word[i] == 'v') year += 200;
        else if(word[i] == 'x') year += 300;
        else if(word[i] == 'y') year += 400;
        else if(word[i] == 'z') year += 500;
    }
    printf("%d\n", year);
    free(word);
    return 0;
}
