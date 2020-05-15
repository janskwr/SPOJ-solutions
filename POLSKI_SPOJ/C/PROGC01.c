#include <stdio.h>
#include <stdlib.h>

int main() {
    char *line = malloc(10000 * sizeof(char));
    int counter = 0;
    while(fgets(line, 10000 * sizeof(char), stdin)){
        counter++;
    }
    printf("%d\n", counter);
    free(line);
    return 0;
}
