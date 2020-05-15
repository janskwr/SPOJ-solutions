#include <stdio.h>

int main() {
    int num;
    int counter = 0;
    int tab[100];
    int i = 0;
    while(scanf(" %d", &num) != EOF && counter != 3){
        tab[i] = num;
        printf("%d\n", tab[i]);
        if(i > 0 && tab[i] != tab[i - 1] && tab[i] == 42) counter++;
        i++;
    }
    return 0;
}
