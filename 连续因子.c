#include<stdio.h>
#include<math.h>
prime(){
	for(int i=2;i<=sqrt(n);i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}
int main()
{
	int n,j;
	scanf("%d",&n);
	if(prime()){
		printf("1\n%d",n);
	}
	else{
		for(int start=1;start<=sqrt(n);start++){
			j=1;
			for(int end=start+1;end<=n;end++){
				j=start*end;
				length=end-start+1;
				if(n%j==0&&end-start+1>length){
					length=end-start+1;
				}
			}
		}
		printf("%d\n",length);
		for(j=start;j<=end;j++){
			if(j==start){
				printf("%d",j);
			}else{
				printf("*%d",j);
		}
		printf("\n");
	}
}
return 0;
}