#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char *word = malloc(1000 * sizeof(char));
    while(scanf("%s", word) != EOF){
        int length = strlen(word);
        char tmp;
        for(int i = 0; i < length / 2; i++){
            tmp = word[i];
            word[i] = word[length - 1 - i];
            word[length - 1 - i] = tmp;
        }
        printf("%s\n", word);
    }
    free(word);
    return 0;
}
