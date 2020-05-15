#include <stdio.h>

int main() {
    int numberOfCases;
    scanf("%d", &numberOfCases);
    for(int i = 0; i < numberOfCases; i++){
        int range, num1, num2;
        scanf("%d %d %d", &range, &num1, &num2);
        for(int j = 1; j < range; j++){
            if((j % num1 == 0) && (j % num2 != 0)){
                printf("%d ", j);
            }
        }
        printf("\n");
    }
    return 0;
}
