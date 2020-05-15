#include <stdio.h>

int main() {
    int numberOfCases;
    scanf("%d", &numberOfCases);
    if(numberOfCases > 0 && numberOfCases < 50){
        for(int i = 0; i < numberOfCases; i++){
            int numberOfNumbers;
            scanf("%d\n", &numberOfNumbers);
            int sum = 0;
            for(int j = 0; j < numberOfNumbers; j++){
                int num;
                scanf("%d ", &num);
                sum += num;
            }
            printf("%d ", sum);
        }
    }
    return 0;
}
