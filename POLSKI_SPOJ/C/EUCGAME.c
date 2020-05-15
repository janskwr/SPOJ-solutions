#include <stdio.h>

int main() {
    int numberOfCases;
    scanf("%d", &numberOfCases);
    for(int i = 0; i < numberOfCases; i++){
        int token1, token2;
        scanf("%d %d", &token1, &token2);
        while(token1 != token2){
            if(token1 > token2){
                token1 = token1 - token2;
            }
            else if(token2 > token1){
                token2 = token2 - token1;
            }
        }
        printf("%d\n", token1 + token2);
    }
}
