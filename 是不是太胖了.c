#include<stdio.h>
int main(){
    float H=0.0;
    float end=0.0;
    scanf("%f",&H);
    end=(H-100.0)*0.9;
    printf("%.1f",end*2);
    return 0;
}