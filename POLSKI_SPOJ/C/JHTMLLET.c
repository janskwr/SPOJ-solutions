#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
    char *line = malloc(200 * sizeof(char));
    while(fgets(line, 200 * sizeof(char), stdin)){
        int length = (int)strlen(line);
        int controller = 0;
        for(int i = 0; i < length; i++){
            if(line[i] == '<'){
                printf("<");
                controller++;
            }
            else if(line[i] == '>'){
                printf(">");
                controller--;
            }
            else{
                if(controller == 1) printf("%c", toupper(line[i]));
                else printf("%c", line[i]);
            }
        }
    }
    free(line);
    return 0;
}
