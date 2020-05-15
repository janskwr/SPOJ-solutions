#include <stdio.h>

int main() {
    int number;
    scanf("%d", &number);
    for(int i = number; i > number - 100; i--){
        if (i % 15 == 0) printf("SPOKOKOKO\n");
        else if (i % 3 == 0) printf("KOKO\n");
        else if (i % 5 == 0) printf("SPOKO\n");
        else printf("%d\n", i);
    }
    return 0;
}
