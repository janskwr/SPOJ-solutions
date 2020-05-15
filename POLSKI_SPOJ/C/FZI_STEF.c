#include <stdio.h>
#include <stdlib.h>

int main() {
    int towns;
    scanf("%d", &towns);
    int *numBuff;
    numBuff = (int *) malloc(towns * sizeof(int));
    int profit;
    for (int i = 0; i < towns; i++) {
        scanf(" %d", &profit);
        numBuff[i] = profit;
    }
    long long int sumNow = 0;
    long long int maxSum = 0;
    for(int j = 0; j < towns; j++){
        if(sumNow + numBuff[j] > 0) sumNow += numBuff[j];
        else sumNow = 0;
        if(maxSum >= sumNow) maxSum = maxSum;
        else maxSum = sumNow;
    }
    printf("%llu\n", maxSum);
    free(numBuff);
    return 0;
}
