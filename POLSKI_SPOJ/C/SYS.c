#include <stdio.h>
#include <stdlib.h>

int main() {
    int numberOfCases;
    scanf("%d", &numberOfCases);
    int num;
    for(int i = 0; i < numberOfCases; i++){
        scanf(" %d", &num);
        int undecNum = num;
        int *undecBuff = malloc(11 * sizeof(int));
        int j;
        for(j = 0; undecNum != 0; j++){
            undecBuff[j] = undecNum % 11;
            undecNum = (undecNum - undecBuff[j]) / 11;
        }
        printf("%0X ", num);
        for(int k = j - 1; k >= 0; k--){
            if(undecBuff[k] == 10) printf("A");
            else printf("%d", undecBuff[k]);
        }
        printf("\n");
        free(undecBuff);
    }
    return 0;
}
