#include <stdio.h>

int main() {
    int numberOfCases;
    scanf("%d", &numberOfCases);
    for(int i = 0; i < numberOfCases; i++){
        int bodySize;
        scanf(" %d", &bodySize);
        int num;
        int sum = 0;
        for(int j = 0; j < bodySize; j++){
            scanf(" %d", &num);
            sum += num;
        }
        int age = sum + bodySize - 1;
        printf("%d\n", age);
    }
    return 0;
}
