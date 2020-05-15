#include <stdio.h>
#include <stdbool.h>

bool isPrime(int primeNumber){
    int tmp = primeNumber / 2;
    if(primeNumber == 1) return false;
    if(primeNumber == 2 || primeNumber == 3) return true;
    else {
        for(int i = 2; i <= tmp; i++){
            if(primeNumber % i == 0) return false;
        }
    }
    return true;
}

int main() {
    int num;
    int n;
    scanf("%d", &n);
    if(n >= 0 && n <= 100000) {
        for(int i = 0; scanf("%d", &num) && num <= 10000 && num > 0) {
            if (isPrime(num) == true) printf("TAK\n");
            else if (isPrime(num) == false) printf("NIE\n");
        }
    }
    return 0;
}
