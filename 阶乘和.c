#include<stdio.h>
int main(){
    int N,S=0;
    scanf("%d",&N);
    for(int i=1;i<=N;i++){
    	int k=1;
        for(int j=1;j<=i;j++){
            k=k*j;
        }
        S=S+k;
    }
    printf("%d",S);
    return 0;
}