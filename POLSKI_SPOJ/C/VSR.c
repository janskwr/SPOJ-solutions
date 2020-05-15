#include <stdio.h>

int main() {
    int numberOfCases;
    scanf("%d", &numberOfCases);
    for(int i = 0; i < numberOfCases; i++){
        double velocity1;
        double velocity2;
        scanf("%lf %lf", &velocity1, &velocity2);
        double result = (2 * velocity1 * velocity2) / (velocity1 + velocity2);
        printf("%d\n", (int)result);
    }
    return 0;
}
