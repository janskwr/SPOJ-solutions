#include <stdio.h>
#include <string.h>

int main() {
    int numberOfCases;
    scanf("%d", &numberOfCases);
    for(int i = 0; i < numberOfCases; i++){
        char word[200];
        scanf("%s", word);
        int size = (int)strlen(word);
        for(int j = 0; j < (size / 2); j++){
            printf("%c", word[j]);
        }
        printf("\n");
    }
    return 0;
}
// sędzia z dziwnego powodu nie chce przyjąć tego rozwiązania
