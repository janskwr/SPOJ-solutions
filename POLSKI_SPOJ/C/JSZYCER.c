#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void encryption(char *message) {
    char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"; // 26 wyrazów
    for (int j = 0; j < strlen(message); j++) {
        for(int i = 0; i < 23; i++){
            if(alphabet[i] == message[j]){
                message[j] = alphabet[i + 3];
                break;
            }
            else if(message[j] == 'X'){
                message[j] = 'A';
                break;
            }
            else if(message[j] == 'Y'){
                message[j] = 'B';
                break;
            }
            else if(message[j] == 'Z'){
                message[j] = 'C';
                break;
            }
        }
    }
    printf("%s ", message);
}

int main() {
    char *word = malloc(200 * sizeof(char));
    while (scanf("%s", word) != EOF) {
        encryption(word);
    }
    return 0;
}
