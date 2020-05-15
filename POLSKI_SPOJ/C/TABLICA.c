#include <stdio.h>

int main() {
    int tab[100];
    int num;
    int counter = 0;
    while(scanf("%d ", &num) != EOF){
        tab[counter] = num;
        counter++;
    }
    int temp;
    for(int i = 0; i < (counter - 1) / 2; i++){
        temp = tab[i];
        tab[i] = tab[counter - 1 - i];
        tab[counter - 1 - i] = temp;
    }
    for(int j = 0; j < counter; j++){
        printf("%d ", tab[j]);
    }
}
