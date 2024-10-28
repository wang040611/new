#include<stdio.h>
int main(){
    int l;
    char C;
    scanf("%d %c",&l,&C);
    int h=(l+1)/2;
    for(int i=0;i<h;i++){
        for(int j=0;j<l;j++){
            printf("%c",C);
        }
            printf("\n");
        }
        return 0;
    }