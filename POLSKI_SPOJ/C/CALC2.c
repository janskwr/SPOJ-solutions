#include <stdio.h>

int main() {
    char sign;
    int tab[10];
    for(int i = 0; i < 10; i++) tab[i] = i;
    int num1;
    int num2;
    while (scanf(" %c %d %d", &sign, &num1, &num2) != EOF){
        switch (sign) {
            case '+':
                printf("%d\n", tab[num1] + tab[num2]);
                break;
            case '-':
                printf("%d\n", tab[num1] - tab[num2]);
                break;
            case '*':
                printf("%d\n", tab[num1] * tab[num2]);
                break;
            case '/':
                printf("%d\n", tab[num1] / tab[num2]);
                break;
            case '%':
                printf("%d\n", tab[num1] % tab[num2]);
                break;
            case 'z':
                tab[num1] = num2;
                break;
        }
    }
    return 0;
}
