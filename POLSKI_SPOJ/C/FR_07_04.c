#include <stdio.h>

int main() {
    int numberOfCases;
    scanf("%d", &numberOfCases);
    double off1, off2;
    for (int i = 0; i < numberOfCases; i++) {
        scanf(" %lf %lf", &off1, &off2);
        double priceAtTheBeginning = 10000;
        double priceAfterFirstDiscount = priceAtTheBeginning - (priceAtTheBeginning * off1 / 100);
        double priceAfterSecondDiscount = priceAfterFirstDiscount - (priceAfterFirstDiscount * off2 / 100);
        double temp = (priceAfterSecondDiscount * 100) / priceAtTheBeginning;
        double fullDiscount = 100 - temp;
        printf("%.2f\n", fullDiscount);
    }
}
