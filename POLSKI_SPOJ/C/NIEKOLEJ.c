#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);
    if (number == 0) printf("0\n");
    else if (number == 1 || number == 2) printf("NIE\n");
    else if (number == 3) printf("1 3 0 2\n");
    else {
        for (int i = 0; i <= number; i += 2) {
            printf("%d ", i);
        }
        for (int j = 1; j <= number; j += 2) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}
