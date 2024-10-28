include<stdio.h>
int main(){
    int N;
    int count=0;
    int id[100001];
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&N);
        for(int j=0;j<N;j++){
            int num;
            scanf("%d",&num);
            id[num]=num;
        }
    }
    int M=0;
    scanf("%d",&M);
    for(int i=0;i<M;i++){
        int num;
        scanf("%d",&num);
        if(id[num]==0){
            printf("%d ",num);
            id[num]=num;
            count++;
        }
}
    if(count==0)
    {printf("No one is handsome")}
}