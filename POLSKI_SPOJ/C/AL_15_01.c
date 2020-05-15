#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *dareksAnswers = malloc(1000000 * sizeof(char));
    char *jareksAnswers = malloc(1000000 * sizeof(char));
    char *marksAnswers = malloc(1000000 * sizeof(char));
    scanf(" %s\n %s\n %s", dareksAnswers, jareksAnswers, marksAnswers);
    int maxPoints = 0;
    for(int i = 0; i < (int)strlen(dareksAnswers); i++){
        if (dareksAnswers[i] != jareksAnswers[i]) {
            if (jareksAnswers[i] == marksAnswers[i]) maxPoints += 2;
            else maxPoints++;
        }
        else {
            if (dareksAnswers[i] != marksAnswers[i]) maxPoints++;
        }
    }
    printf("%d\n", maxPoints);
    free(dareksAnswers);
    free(jareksAnswers);
    free(marksAnswers);
}
