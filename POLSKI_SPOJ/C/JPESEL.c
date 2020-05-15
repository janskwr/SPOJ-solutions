#include <stdio.h>

int main() {
    int numberOfCases;
    scanf("%d", &numberOfCases);
    for (int i = 0; i < numberOfCases; i++) {
        char pesel[11];
        scanf("%s", pesel);
        int check = ((int) pesel[0] * 1) + ((int) pesel[1] * 3) + ((int) pesel[2] * 7) + ((int) pesel[3] * 9) +
                    ((int) pesel[4] * 1) + ((int) pesel[5] * 3) + ((int) pesel[6] * 7) + ((int) pesel[7] * 9) +
                    ((int) pesel[8] * 1) + ((int) pesel[9] * 3) + ((int) pesel[10] * 1);
        if (check % 10 == 0) {
            printf("D\n");
        } else {
            printf("N\n");
        }
    }
    return 0;
}
