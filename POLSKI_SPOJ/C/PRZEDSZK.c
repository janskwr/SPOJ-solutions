#include <stdio.h>

void lcmOfTwoNumbers(int num1, int num2){
    int temp;
    int mem1 = num1;
    int mem2 = num2;
    while (num2 != 0) {
        temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }
    int gcd = num1;
    int lcm = (mem1 * mem2) / gcd;
    printf("%d\n", lcm);
}

int main() {
    int numberOfCases;
    scanf("%d", &numberOfCases);
    if(numberOfCases >= 1 && numberOfCases <= 20){
        for(int i = 0; i < numberOfCases; i++){
            int ammount1;
            int ammount2;
            scanf("%d %d", &ammount1, &ammount2);
            lcmOfTwoNumbers(ammount1, ammount2);
        }
    }
    return 0;
}
