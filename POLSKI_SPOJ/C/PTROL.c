#include <stdio.h>

int main() {
    int numberOfCases;
    scanf("%d", &numberOfCases);
    for (int i = 0; i < numberOfCases; i++) {
        int numberOfNumbers;
        scanf("%d", &numberOfNumbers);
        int tab[numberOfNumbers];
        for (int j = 0; j < numberOfNumbers; j++) {
            scanf(" %d", &tab[j]);
        }
        if (numberOfNumbers != 1) {
            int tmp = tab[0];
            for (int q = 0; q < numberOfNumbers - 1; q++) {
                tab[q] = tab[q + 1];
            }
            tab[numberOfNumbers - 1] = tmp;
        }
        for (int t = 0; t < numberOfNumbers; t++) {
            printf("%d ", tab[t]);
        }
        printf("\n");
    }
    return 0;
}
