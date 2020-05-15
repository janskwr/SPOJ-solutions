#include <stdio.h>

int main() {
    int numberOfCases;
    scanf("%d\n", &numberOfCases);
    for(int i = 0; i < numberOfCases; i++){
        int size;
        scanf("%d", &size);
        int tab[size - 1];
        for(int j = 0; j < size; j++){
            scanf("%d", &tab[j]);
        }
        if(size == 1){
            printf("%d\n", tab[0]);
        }
        else {
            int tmp1;
            for(int y = 0; y < (size / 2); y++){
                tmp1 = tab[y];
                tab[y] = tab[size - y - 1];
                tab[size - y - 1] = tmp1;
            }
            for(int x = 0; x < size; x++){
                printf("%d ", tab[x]);
            }
        }
    }
    return 0;
}
