#include <stdio.h>

void printfloat(float num){
    for (int i = sizeof num - 1; i >= 0; i--){
        printf("%x ",(((const unsigned char*)&num)[i]));
    }
}

int main() {
    int numberOfCases;
    scanf("%d", &numberOfCases);
    for(int i = 0; i < numberOfCases; i++){
        float number;
        scanf("%f", &number);
        printfloat(number);
    }
    return 0;
}
