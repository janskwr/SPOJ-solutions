#include <stdio.h>

int main() {
    int numberOfDigits, movement;
    scanf("%d %d", &numberOfDigits, &movement);
    int num;
    int tab[numberOfDigits];
    for(int i = 0; i < numberOfDigits; i++){
        scanf(" %d", &num);
        tab[i] = num;
    }
    for(int j = movement; j < numberOfDigits; j++){
        printf("%d ", tab[j]);
    }
    for(int k = 0; k < movement; k++){
        printf("%d ", tab[k]);
    }
}
