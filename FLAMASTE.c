
#include <stdio.h>
#include <string.h>

int main() {
    int numberOfCases;
    scanf("%d", &numberOfCases);
    if(numberOfCases >= 1 && numberOfCases <= 50){
        for(int i = 0; i < numberOfCases; i++){
            char word[200];
            scanf("%s\", word);
            unsigned long size = (unsigned long)strlen(word);
            // size to długość inputu
                int count = 1;
                for(int j = 1; j <= size; j++){
                    if(word[j] != word[j - 1]){
                        if(count > 2){
                            printf("%c%d", word[j - 1], count);
                        }
                        else if(count == 2){
                            printf("%c%c", word[j - 1], word[j - 1]);
                        }
                        else {
                            printf("%c", word[j - 1]);
                        }
                        count = 1;
                    }
                    else count++;
                }
                printf("\n");
            }
        }
    return 0;
}
