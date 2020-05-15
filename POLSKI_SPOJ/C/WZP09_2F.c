#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *line = malloc(1000 * sizeof(int));
    while (fgets(line, 1000 * sizeof(int), stdin)) {
        if ((int)strlen(line) == 1 && line[0] == '0') return 0;
        else if ((int)strlen(line) == 2 && line[0] == '0') return 0;
        int sum = 0;
        for (int i = 0; i < (int) strlen(line) - 1; i++) {
            sum = sum + line[i] - 48;
        }
        if (sum % 3 == 0) {
            if (line[(int) strlen(line) - 2] == '0' || line[(int) strlen(line) - 2] == '5') printf("TAK\n");
            else printf("NIE\n");
        } else printf("NIE\n");
    }
}
