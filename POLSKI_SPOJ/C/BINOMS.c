#include <stdio.h>

long double factorial(long double number) {
    if (number == 0) return 1;
    else return number * factorial(number - 1);
}

long double binomialTheorem(long double number1, long double number2) {
    if (number2 > number1 - number2) {
        long double number1buffed = 1;
        //long double controller = number1 - number2;
        //int counter = 0;
        for (int i = number2 + 1; i <= number1; i++) {
            number1buffed = number1buffed * i;
            //if(number1buffed > 1000000000){
            //    number1buffed = number1buffed / controller;
            //    counter++;
            //}
        }
        return (number1buffed) / (factorial(number1 - number2));
    } else {
        long double number2buffed = 1;
        //long double controller2 = number2;
        //int counter2 = 0;
        for (int j = number1 - number2 + 1; j <= number1; j++) {
            number2buffed *= j;
            //if(number2buffed > 1000000000){
            //    number2buffed = number2buffed / controller2;
            //    counter2++;
            //}
        }
        return ((number2buffed) / (factorial(number2)));
    }
}


int main() {
    int numberOfCases;
    scanf("%d", &numberOfCases);
    for (int i = 0; i < numberOfCases; i++) {
        long double n, k;
        scanf(" %Lf %Lf", &n, &k);
        printf("%llu\n", (unsigned long long int)binomialTheorem(n, k));
    }
    return 0;
}
