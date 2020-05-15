#include <stdio.h>

int main() {
    int num;
    for(; scanf("%d", &num) >= 0 && num != 42; printf("%d\n", num));
    return 0;
}
