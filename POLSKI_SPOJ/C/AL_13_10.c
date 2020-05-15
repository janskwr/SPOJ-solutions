#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int numberOfCases;
    scanf("%d", &numberOfCases);
    char *word1 = malloc(1000 * sizeof(char));
    char *word2 = malloc(1000 * sizeof(char));
    for(int i = 0; i < numberOfCases; i++){
        scanf(" %s %s", word1, word2);
        int length1 = (int)strlen(word1);
        int length2 = (int)strlen(word2);
        if (length2 > length1) printf("Nie\n");
        else {
            int counter = 0;
            int q = 0;
            for (int j = 0; j < length1; j++){
                if (word1[j] == word2[q]) {
                    counter++;
                    q++;
                }
            }
            if (counter == length2) printf("Tak\n");
            else printf("Nie\n");
        }
    }
    free(word1);
    free(word2);
}
