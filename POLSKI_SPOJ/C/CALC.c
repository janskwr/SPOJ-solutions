#include <stdio.h>

int main() {
    char sign;
    int num1;
    int num2;
    while (scanf(" %c %d %d", &sign, &num1, &num2) != EOF){
        switch (sign) {
            case '+':
                printf("%d\n", num1 + num2);
                break;
            case '-':
                printf("%d\n", num1 - num2);
                break;
            case '*':
                printf("%d\n", num1 * num2);
                break;
            case '/':
                printf("%d\n", num1 / num2);
                break;
            case '%':
                printf("%d\n", num1 % num2);
                break;
        }
    }
    return 0;
}
