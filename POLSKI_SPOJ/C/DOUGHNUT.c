#include <stdio.h>

int main() {
    int numberOfCases;
    scanf("%d", &numberOfCases);
    int numberOfCats, harrysPower, weight;
    for(int i = 0; i < numberOfCases; i++){
        scanf(" %d %d %d", &numberOfCats, &harrysPower, &weight);
        if(numberOfCats * weight <= harrysPower) printf("yes\n");
        else printf("no\n");
    }
    return 0;
}
