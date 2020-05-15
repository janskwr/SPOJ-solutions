#include<stdio.h>
#include<string.h>
#define Q printf
#define W else if
int main(){int n;
scanf("%d", &n);
char l[1000];
for(int i=0;i<=n;i++){
    fgets(l,1000,stdin);
    for(int j=0;j<strlen(l)-1;j++){
        int x=l[j];
        if(x==' '){}
        W(x<'F')Q("%d ",x-54);
        W(x<'J')Q("%d ",x-49);
        W(x<'L')Q("%d ",x-50);
        W(x<'Q')Q("%d ",x-45);
        W(x<'V')Q("%d ",x-40);
        else Q("%d ",x-35);
    }
    Q("\n");
}
}
