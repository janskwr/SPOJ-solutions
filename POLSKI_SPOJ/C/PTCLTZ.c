#include <stdio.h>

int main() {
    int numberOfCases;
    scanf("%d", &numberOfCases);
    for(int i = 0; i < numberOfCases; i++){
        int num = 0;
        int counter = 0;
        scanf("%d", &num);
        while(num != 1){
            if(num % 2 == 0){
                num = num / 2;
            }
            else{
                num = 3 * num + 1;
            }
            counter++;
        }
        printf("%d\n", counter);
    }
    return 0;
}
