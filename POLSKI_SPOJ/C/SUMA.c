#include <stdio.h>

int main() {
    short num = 0;
    int sum = 0;
    while (scanf("%hd", &num) != EOF) {
        sum += num;
        printf("%d\n", sum);
    }
    return 0;
}
