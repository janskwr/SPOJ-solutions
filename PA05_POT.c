#include <stdio.h>

int main() {
    int numberOfCases;
    scanf("%d", &numberOfCases);
    if(numberOfCases >= 1 && numberOfCases <= 10){
        for(int i = 0; i < numberOfCases; i++){
            long int num1;
            long int num2;
            scanf("%li %li", &num1, &num2);
            if(num2 == 0) printf("1\n");
            else if(num1 == 1) printf("1\n");
            else if(num1 == 0) printf("0\n");
            else if(num2 == 1) printf("%li\n", num1 % 10);
            else if(num1 % 10 == 0) printf("0\n");
            else if(num1 % 10 == 1) printf("1\n");
            else if(num1 % 10 == 5) printf("5\n");
            else if(num1 % 10 == 6) printf("6\n");
            else if(num1 % 10 == 2){
                if(num2 % 4 == 0) printf("6\n");
                else if(num2 % 4 == 1) printf("2\n");
                else if(num2 % 4 == 2) printf("4\n");
                else printf("8\n");
            }
            else if(num1 % 10 == 3){
                if(num2 % 4 == 0) printf("1\n");
                else if(num2 % 4 == 1) printf("3\n");
                else if(num2 % 4 == 2) printf("9\n");
                else printf("7\n");
            }
            else if(num1 % 10 == 4){
                if(num2 % 2 == 0) printf("6\n");
                else printf("4\n");
            }
            else if(num1 % 10 == 7){
                if(num2 % 4 == 0) printf("1\n");
                else if(num2 % 4 == 1) printf("7\n");
                else if(num2 % 4 == 2) printf("9\n");
                else printf("3\n");
            }
            else if(num1 % 10 == 8){
                if(num2 % 4 == 0) printf("6\n");
                else if(num2 % 4 == 1) printf("8\n");
                else if(num2 % 4 == 2) printf("4\n");
                else printf("2\n");
            }
            else if(num1 % 10 == 9){
                if(num2 % 2 == 0) printf("1\n");
                else printf("9\n");
            }
        }
    }
    return 0;
}
