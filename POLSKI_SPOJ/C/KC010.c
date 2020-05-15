#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    char *line;
    line = (char*)malloc(1000000 * sizeof(char));
    while(fgets(line, 1000000 * sizeof(char), stdin)){
        int length = (int)strlen(line);
        int numCounter = 0;
        int wordCounter = 0;
        for(int i = 0; i < length; i++){
            if(isdigit(line[i])){
                if(i == 0) numCounter++;
                else if(!isdigit(line[i - 1])) numCounter++;
            }
            else if(isalpha(line[i])){
                if(i == 0) wordCounter++;
                else if(!isalpha(line[i - 1])) wordCounter++;
            }
        }
        printf("%d %d\n", numCounter, wordCounter);
    }
    free(line);
    return 0;
}
