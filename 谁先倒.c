#include<stdio.h>
int main()
{
	int Amax = 0, Bmax = 0;
	scanf("%d %d", &Amax, &Bmax);
	int n = 0;
	scanf("%d", &n);
	int i = 0,jhua=0,jhan=0,yhua=0,yhan=0,jh=0,yh=0;
	for (i = 0;i < n;i++)
	{
		scanf("%d %d %d %d", &jhan, &jhua, &yhan, &yhua);
		if (jhua == jhan + yhan&&yhua!=jhan+yhan)
		{
			jh++;
		}
		else if (yhua == jhan + yhan&&jhua!=jhan+yhan)
		{
			yh++;
		}
		if (jh == Amax+1 || yh == Bmax+1)
			break;
	}
	if (jh == Amax + 1)
	{
		printf("A\n");
		printf("%d", yh);
	}
	else if (yh == Bmax + 1)
	{
		printf("B\n");
		printf("%d", jh);
	}
	return 0;
}