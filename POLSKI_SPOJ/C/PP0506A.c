#include <stdio.h>
#include <string.h>

// name = "ABCXFAWDAW"
// coordX = "1443645747"
// coordY = "5645354242"
// distance = "2444441414"

void BubbleSort(char b[][11], int c[], int d[], int a[], int array_size) {
    int i, j, temp, temp2, temp3;
    char temp4[11];
    for (i = 0; i < (array_size - 1); ++i) {
        for (j = 0; j < array_size - 1 - i; ++j) {
            if (a[j] > a[j + 1]) {
                temp = a[j + 1];
                a[j + 1] = a[j];
                a[j] = temp;
                temp2 = c[j + 1];
                c[j + 1] = c[j];
                c[j] = temp2;
                temp3 = d[j + 1];
                d[j + 1] = d[j];
                d[j] = temp3;
                //temp4 = b[j + 1];
                strcpy(temp4, b[j + 1]);
                //b[j + 1] = b[j];
                strcpy(b[j + 1], b[j]);
                //b[j] = temp4;
                strcpy(b[j], temp4);
            }
        }
    }
}

int main() {
    int numberOfCases;
    scanf("%d", &numberOfCases);
    for (int i = 0; i < numberOfCases; i++) {
        int numberOfPoints;
        scanf("%d", &numberOfPoints);
        char name[numberOfPoints][11];
        int coordX[numberOfPoints];
        int coordY[numberOfPoints];
        int distance[numberOfPoints];
        for (int j = 0; j < numberOfPoints; j++) {
            scanf(" %s %d %d", name[j], &coordX[j], &coordY[j]);
            distance[j] = (coordX[j] * coordX[j]) + (coordY[j] * coordY[j]);
        }
        BubbleSort(name, coordY, coordX, distance, numberOfPoints);
        for(int q = 0; q < numberOfPoints; q++){
            printf("%s %d %d\n", name[q], coordX[q], coordY[q]);
        }
        printf("\n");
    }
    return 0;
}
