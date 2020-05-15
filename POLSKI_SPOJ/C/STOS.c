#include <stdio.h>

int main() {
    char task;
    int tab[10];
    int counter = 0;
    while(scanf("%c", &task) != EOF){
        if(task == '+'){
            if(counter >= 10){
                int whatever;
                scanf("%d\n", &whatever);
                printf(":(\n");
            }
            else {
                int num;
                scanf("%d", &num);
                tab[counter] = num;
                printf(":)\n");
                counter++;
            }
        }
        else if(task == '-'){
            if(counter <= 0){
                printf(":(\n");
            }
            else{
                printf("%d\n", tab[counter - 1]);
                counter--;
            }
        }
    }
    return 0;
}
