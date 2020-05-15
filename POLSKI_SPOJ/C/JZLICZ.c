#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    int numberOfLines;
    scanf("%d", &numberOfLines);
    char *line = malloc(200 * sizeof(char));
    char alphabet[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int countLetters[52];
    for (int j = 0; j < 52; j++) {
        countLetters[j] = 0;
    }
    for (int i = 0; i <= numberOfLines; i++) {
        fgets(line, 200, stdin);
        int length = (int) strlen(line);
        for (int k = 0; k < length; k++) {
            for (int m = 0; m < 52; m++) {
                if (line[k] == alphabet[m]) countLetters[m]++;
            }
        }
    }
    for (int q = 0; q < 52; q++) {
        if (countLetters[q] != 0) printf("%c %d\n", alphabet[q], countLetters[q]);
    }
    free(line);
    return 0;
}
