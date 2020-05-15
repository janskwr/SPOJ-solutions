#include <stdio.h>

int main() {
    int numberOfCases;
    scanf("%d", &numberOfCases);
    for(int i = 0; i < numberOfCases; i++){
        int numberOfContestants;
        int cookiesInPack;
        scanf("%d %d", &numberOfContestants, &cookiesInPack);
        double paceSum = 0;
        for(int j = 0; j < numberOfContestants; j++){
            int pace;
            scanf("%d", &pace);
            int counting = (86400 / pace);
            paceSum += counting;
        }
        double resultNoFixed = paceSum / cookiesInPack;
        int result;
        if(resultNoFixed != (int)resultNoFixed){
            result = (int)resultNoFixed + 1;
        }
        else {
            result = (int)resultNoFixed;
        }
        printf("%d\n", result);
    }
    return 0;
}
