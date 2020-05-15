#include <stdio.h>

int main() {
    double a, b, c;
    while(scanf("%lf %lf %lf", &a, &b, &c) != EOF){
        if(b * b - 4 * a * c < 0) printf("0\n");
        else if(b * b - 4 * a * c == 0) printf("1\n");
        else printf("2\n");
    }
}
