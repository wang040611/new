#include<stdio.h>
int main(){
    int n,end=1;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        end=end*2;
    }
    printf("2^%d = %d",n,end);
    return 0;
}