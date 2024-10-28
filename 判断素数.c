#include <stdio.h>
#include <math.h>
int main()
{
	int n,m,i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&m);
		if(m==1)
			puts("No");
		else
		{
			for(j=2;j<=sqrt(m);j++)
				if(m%j==0)
					break;
			if(j>sqrt(m))
				puts("Yes");
			else 
				puts("No");
		}
	}
	return 0;	
}
 
