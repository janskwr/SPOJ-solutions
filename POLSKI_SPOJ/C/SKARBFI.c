#include <stdio.h>

int main() {
    int numberOfCases;
    scanf("%d", &numberOfCases);
    for(int i = 0; i < numberOfCases; i++){
        int numberOfHints;
        scanf(" %d", &numberOfHints);
        int vertical = 0;
        int horizontally = 0;
        int direction, moves;
        for(int j = 0; j < numberOfHints; j++){
            scanf(" %d %d", &direction, &moves);
            if(direction == 0) vertical+=moves;
            else if(direction == 1) vertical-=moves;
            else if(direction == 2) horizontally-=moves;
            else horizontally+=moves;
        }
        if(vertical == 0 && horizontally == 0) printf("studnia\n");
        else if(vertical == 0){
            if(horizontally < 0) printf("%d %d\n", 2, horizontally * (-1));
            else printf("%d %d\n", 3, horizontally);
        }
        else if(horizontally == 0){
            if(vertical < 0) printf("%d %d\n", 1, vertical * (-1));
            else printf("%d %d\n", 0, vertical);
        }
        else {
            if(horizontally > 0 && vertical > 0) printf("%d %d\n%d %d\n", 0, vertical, 3, horizontally);
            else if(horizontally < 0 && vertical < 0) printf("%d %d\n%d %d\n", 1, vertical * (-1), 2, horizontally * (-1));
            else if(horizontally < 0 && vertical > 0) printf("%d %d\n%d %d\n", 1, vertical * (-1), 3, horizontally);
            else if(horizontally > 0 && vertical < 0) printf("%d %d\n%d %d\n", 0, vertical, 2, horizontally * (-1));
        }
    }
    return 0;
}
