#include <stdio.h>

void nwd(int num1, int num2){
    int tmp;
    while(num2 != 0){
        tmp = num2;
        num2 = num1 % num2;
        num1 = tmp;
    }
    printf("%d\n", num1);
}

int main() {
    int numberOfCases;
    scanf("%d", &numberOfCases);
    for(int i = 0; i < numberOfCases; i++){
        int num1;
        int num2;
        scanf("%d %d", &num1, &num2);
        nwd(num1, num2);
    }
    return 0;
}
