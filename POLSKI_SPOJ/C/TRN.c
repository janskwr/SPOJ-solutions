#include <stdio.h>

int main() {
    int rows, columns;
    scanf("%d %d", &rows, &columns);
    int tab[columns][rows];
    int num;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            scanf(" %d", &num);
            tab[j][i] = num;
        }
    }
    for (int k = 0; k < columns; k++) {
        for (int m = 0; m < rows; m++) {
            printf("%d ", tab[k][m]);
        }
        printf("\n");
    }
}
