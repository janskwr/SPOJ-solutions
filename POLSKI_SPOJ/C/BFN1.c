#include <stdio.h>

int reverse(int num){
    int revNum = 0;
    while (num != 0){
        revNum = revNum * 10;
        revNum = revNum + num % 10;
        num = num / 10;
    }
    return revNum;
}

int main() {
    int numberOfCases;
    scanf("%d", &numberOfCases);
    for(int i = 0; i < numberOfCases; i++){
        int number;
        scanf("%d", &number);
        if(number < 10){
            printf("%d %d\n", number, 0);
        }
        else{
            int count = 0;
            while(number != reverse(number)){
                number += reverse(number);
                count++;
            }
            printf("%d %d\n", number, count);
        }
    }
    return 0;
}
