#include <stdio.h>

int main() {
    int bisnesClass, bisnesSeats, ecoClass, ecoSeats;
    scanf("%d %d %d %d", &bisnesClass, &bisnesSeats, &ecoClass, &ecoSeats);
    printf("%d", bisnesClass * bisnesSeats + ecoClass * ecoSeats);
    return 0;
}
