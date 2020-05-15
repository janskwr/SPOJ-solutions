#include <stdio.h>
#include <stdlib.h>

int main() {
    int numbers;
    scanf("%d", &numbers);
    long int *numBuff;
    numBuff = (long int*)malloc(numbers * sizeof(long int));
    long int number;
    for(int i = 0; i < numbers; i++){
        scanf(" %ld", &number);
        *(numBuff + i) = number;
    }
    char sign;
    long int controller;
    scanf(" %c %ld", &sign, &controller);
    if(sign == '>'){
        for(int j = 0; j < numbers; j++){
            if(numBuff[j] > controller) printf("%ld\n", numBuff[j]);
        }
    }
    else {
        for(int k = 0; k < numbers; k++){
            if(numBuff[k] < controller) printf("%ld\n", numBuff[k]);
        }
    }
    free(numBuff);
    return 0;
}
