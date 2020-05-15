#include <stdio.h>

int main() {
    double a, b, c;
    while(scanf("%lf %lf %lf", &a, &b, &c) != EOF){
        if(a == 0 && b != c) printf("BR\n");
        else if(a == 0 && b == c) printf("NWR\n");
        else printf("%.2f\n", (c - b) / a);
    }
}
