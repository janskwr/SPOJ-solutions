#include <stdio.h>
#include <stdlib.h>

int main() {
    int numberOfCases;
    scanf(" %d", &numberOfCases);
    for (int i = 0; i < numberOfCases; i++) {
        int size;
        char *buffer = malloc(100 * sizeof(char));
        scanf(" %d %s", &size, buffer);
        int counter = 0;
        int firstNumber = 1;
        if (buffer[0] == '?') firstNumber *= 9;
        for (int j = 1; j < size; j++){
            if (buffer[j] == '?') counter++;
        }
        if (size == 1 && firstNumber == 9) printf("10\n");
        else if (counter == 0 && firstNumber == 1) printf("1\n");
        else {
            printf("%d", firstNumber);
            for (int q = 0; q < counter; q++) printf("0");
            printf("\n");
        }
        free(buffer);
    }
}
