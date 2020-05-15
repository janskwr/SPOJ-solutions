#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int numberOfPhones;
    scanf("%d", &numberOfPhones);
    char *word = (char*)malloc(20 * sizeof(char));
    for(int i = 0; i < numberOfPhones; i++){
        scanf(" %s", word);
        int length = (int)strlen(word);
        word = realloc(word, length * sizeof(char));
        for(int j = 0; j < length; j++){
            if(word[j] == 'A' || word[j] == 'B' || word[j] == 'C') printf("2");
            else if(word[j] == 'D' || word[j] == 'E' || word[j] == 'F') printf("3");
            else if(word[j] == 'G' || word[j] == 'H' || word[j] == 'I') printf("4");
            else if(word[j] == 'J' || word[j] == 'K' || word[j] == 'L') printf("5");
            else if(word[j] == 'M' || word[j] == 'N' || word[j] == 'O') printf("6");
            else if(word[j] == 'P' || word[j] == 'Q' || word[j] == 'R' || word[j] == 'S') printf("7");
            else if(word[j] == 'T' || word[j] == 'U' || word[j] == 'V') printf("8");
            else if(word[j] == 'W' || word[j] == 'X' || word[j] == 'Y' || word[j] == 'Z') printf("9");
        }
        printf("\n");
    }
    free(word);
    return 0;
}
