#include <stdio.h>

int main() {
    unsigned long long int  num;
    unsigned long long int  sum = 0;
    unsigned long long int  sumOfAll = 0;
    while(scanf(" %llu", &num) != EOF){
        if(num == 0){
            printf("%llu\n", sum);
            sumOfAll += sum;
            sum = 0;
        }
        else sum += num;
    }
    printf("%llu\n", sumOfAll);
    return 0;
}
