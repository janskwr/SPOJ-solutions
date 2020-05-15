#include <stdio.h>
#include <math.h>

int main() {
    int numberOfCases;
    scanf("%d", &numberOfCases);
    for(int i = 0; i < numberOfCases; i++){
        int size;
        scanf(" %d", &size);
        int tab[size];
        int sum = 0;
        for(int j = 0; j < size; j++){
            int num;
            scanf(" %d", &num);
            tab[j] = num;
            sum = sum + num;
        }
        double average = (double)sum / (double)size;
        double difference = 100000;
        int counter;
        for(int k = 0; k < size; k++){
            if(fabs(tab[k] - average) < difference){
                difference = fabs(tab[k] - average);
                counter = k;
            }
        }
        printf("%d\n", tab[counter]);
    }
    return 0;
}
