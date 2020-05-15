#include <stdio.h>

int main() {
    int numberOfCases;
    scanf("%d", &numberOfCases);
    for(int i = 0; i < numberOfCases; i++){
        double x1, y1, x2, y2, x3, y3;
        scanf(" %lf\t%lf\t%lf\t%lf\t%lf\t%lf", &x1, &y1, &x2, &y2, &x3, &y3);
        if(x2 - x1 != 0 && x3 - x2 != 0){
            double check1 = (y2 - y1) / (x2 - x1);
            double check2 = (y3 - y2) / (x3 - x2);
            if(check1 == check2) printf("TAK\n");
            else printf("NIE\n");
        }
        else if(x2 - x1 == 0 && x3 - x2 == 0) printf("TAK\n");
        else printf("NIE\n");
    }
    return 0;
}
