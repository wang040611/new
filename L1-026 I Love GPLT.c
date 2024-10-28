#include<stdio.h>
#include<string.h>
int main(){
    char a[]={"I Love GPLT"};
    int len_a=strlen(a);
    for(int i=0;i<len_a;i++){
        printf("%c\n",a[i]);
    }
    return 0;
}