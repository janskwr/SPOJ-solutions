#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char letterToRemove;
    char *word = malloc(100 * sizeof(char));
    while (scanf(" %c %s", &letterToRemove, word) != EOF) {
        int length = (int) strlen(word);
        for(int i = 0; i < length; i++){
            if(word[i] == letterToRemove);
            else printf("%c", word[i]);
        }
        printf("\n");
    }
    return 0;
}
