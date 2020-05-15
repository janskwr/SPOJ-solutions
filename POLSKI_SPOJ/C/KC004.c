#include <stdio.h>

int main() {
    int wantedNum;
    while(scanf(" %d", &wantedNum) != EOF){
        int size;
        scanf(" %d", &size);
        int num;
        int counter = 0;
        for(int i = 0; i < size; i++){
            scanf(" %d", &num);
            if(num == wantedNum) counter++;
        }
        printf("%d\n", counter);
    }
    return 0;
}
