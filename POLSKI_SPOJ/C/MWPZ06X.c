#include <stdio.h>

int main() {
    int numberOfCases;
    scanf("%d", &numberOfCases);
    for(int i = 0; i < numberOfCases; i++){
        int steps;
        scanf("%d", &steps);
        printf("%d\n", steps * steps);
    }
    return 0;
}
