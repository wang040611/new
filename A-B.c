#include<stdio.h>
#include<string.h>
int count=(int x);
int main(){
    char A[100000],B[100000];
    gets(A);
    gets(B);
    for(int i=0;i<strlen(A);i++){
        if(strchr(B,A[i])){
            continue;
        }else{
            printf("%c",A[i]);
        };
    }
    return 0;
}