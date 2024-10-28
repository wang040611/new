#include<stdio.h>
int main()
{
    float N,H,SM,TM;
    scanf("%f",&N);
    for(int i=1;i<=N;i++)
    {
        scanf("%f %f",&H,&TM);
        SM=(H-100)*1.8;
        if(SM==TM){
            printf("You are wan mei!\n");
        }else if(SM>TM){
            if(SM-TM<0.1*SM){
                printf("You are wan mei!\n");
            }else{
                printf("You are tai shou le!\n");
            }
        }else{
            if(TM-SM<0.1*SM){
                printf("You are wan mei!\n");
            }else{
                printf("You are tai pang le!\n");
            }
        }
        
        }
    }