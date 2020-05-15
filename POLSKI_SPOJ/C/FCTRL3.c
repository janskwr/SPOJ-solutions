#include <stdio.h>

int main() {
    int numberOfCases;
    scanf("%d", &numberOfCases);
    if (numberOfCases >= 1 && numberOfCases <= 30) {
        for (int i = 0; i < numberOfCases; i++) {
            unsigned long int num;
            scanf("%lu", &num);
            if (num >= 0 && num <= 1000000000) {
                switch (num) {
                    case 0:
                    case 1:
                        printf("0 1\n");
                        break;
                    case 2:
                        printf("0 2\n");
                        break;
                    case 3:
                        printf("0 6\n");
                        break;
                    case 4:
                        printf("2 4\n");
                        break;
                    case 5:
                    case 6:
                    case 8:
                        printf("2 0\n");
                        break;
                    case 7:
                        printf("4 0\n");
                        break;
                    case 9:
                        printf("8 0\n");
                        break;
                    default:
                        printf("0 0\n");
                        break;
                }
            }
        }
    }
    return 0;
}
