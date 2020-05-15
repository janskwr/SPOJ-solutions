#include <stdio.h>

void swap(int *xp, int *yp) {
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}

void bubbleSort(int a[], int b[], int c[], int d[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++)
        for (j = 0; j < n - i - 1; j++)
            if (a[j] > a[j + 1]) {
                swap(&a[j], &a[j + 1]);
                swap(&b[j], &b[j + 1]);
                swap(&c[j], &c[j + 1]);
                swap(&d[j], &d[j + 1]);
            }
}

int main() {
    int numberOfCases;
    scanf("%d", &numberOfCases);
    int xTab[numberOfCases];
    int yTab[numberOfCases];
    int zTab[numberOfCases];
    int mergeTab[numberOfCases];
    for (int i = 0; i < numberOfCases; i++) {
        scanf(" %d %d %d", &xTab[i], &yTab[i], &zTab[i]);
        mergeTab[i] = (xTab[i] * 1000000) + (yTab[i] * 1000) + (zTab[i]);
    }
    bubbleSort(mergeTab, xTab, yTab, zTab, numberOfCases);
    for (int j = 0; j < numberOfCases; j++) printf("%d %d %d\n", xTab[j], yTab[j], zTab[j]);
}
