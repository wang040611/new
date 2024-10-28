#include<stdio.h>
int main(){
    int h,m;
    scanf("%d:%d",&h,&m);
    if(h>=0 && h<10){
        if(m<10){
            printf("Only 0%d:0%d.  Too early to Dang.",h,m);
        }else{
            printf("Only 0%d:%d.  Too early to Dang.",h,m);
        }}
    if(h>=10 && h<12){
        if(m<10){
            printf("Only %d:0%d.  Too early to Dang.",h,m);
        }else{
            printf("Only %d:%d.  Too early to Dang.",h,m);
        }}
    if(h>=12 && h<24){
        if(m==00  && h==12){
            printf("Only %d:00.  Too early to Dang.",h);
        }else if(m>00){
            for(int i=0;i<h-11;i++){
                printf("Dang");
            }}
            else{
            for(int i=0;i<h-12;i++){
                printf("Dang");}
            }
    }
    return 0;
}
