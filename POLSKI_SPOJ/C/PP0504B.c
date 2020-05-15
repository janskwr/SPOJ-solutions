#include <stdio.h>
#include <string.h>

int main() {
    int numberOfCases;
    scanf("%d", &numberOfCases);
    char string1[200];
    char string2[200];
    for(int i = 0; i < numberOfCases; i++){
        scanf("%s %s", string1, string2);
        int size1 = strlen(string1);
        int size2 = strlen(string2);
        if(size1 >= size2){
            for(int j = 0; j < size2; j++){
                printf("%c", string1[j]);
                printf("%c", string2[j]);
            }
            printf("\n");
        }
        else if(size2 > size1){
            for(int j = 0; j < size1; j++){
                printf("%c", string1[j]);
                printf("%c", string2[j]);
            }
            printf("\n");
        }
    }
    return 0;
}
