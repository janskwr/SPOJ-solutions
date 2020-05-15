#include <stdio.h>

int main() {
    int numberOfCases;
    scanf("%d", &numberOfCases);
    for (int i = 0; i < numberOfCases; i++) {
        int size;
        scanf("%d", &size);
        int container[size];
        for (int j = 0; j < size; j++) {
            int num;
            scanf(" %d", &num);
            container[j] = num;
        }
        for (int q = 1; q < size; q += 2) {
            printf("%d ", container[q]);
        }
        for (int h = 0; h < size; h += 2) {
            printf("%d ", container[h]);
        }
        printf("\n");
    }
    return 0;
}
