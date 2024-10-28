#include<stdio.h>
int main(){
    int j=0,o=0,N,num;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&num);
        if(num%2==0){
            o++;
        }else{
            j++;
        }
    }
    printf("%d %d",j,o);
    return 0;
}