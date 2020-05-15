#include <stdio.h>

int main() {
    int numberOfCases;
    scanf("%d", &numberOfCases);
    for(int i = 0; i < numberOfCases; i++){
        int kids, sweets;
        scanf(" %d %d", &kids, &sweets);
        if (sweets == 0) printf("NIE\n");
        else if (kids == 1) printf("TAK\n");
        else if(sweets % (kids - 1) == 0) printf("NIE\n");
        else printf("TAK\n");
    }
    return 0;
}
