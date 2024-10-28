#include<stdio.h>
int main()
{
	int z = 0, x = 0, c = 0, v = 0;
	char a[10001] = { 0 };
	gets(a);
	for (int i = 0;i < strlen(a);i++)
	{
		if (a[i] == 'G' || a[i] == 'g')
			z++;
		else if (a[i] == 'P' || a[i] == 'p')
			x++;
		else if (a[i] == 'L' || a[i] == 'l')
			c++;
		else if (a[i] == 'T' || a[i] == 't')
			v++;
	}
	do
	{
		if (z > 0)
			printf("G");
		z--;
		if (x > 0)
			printf("P");
		x--;
		if (c > 0)
			printf("L");
		c--;
		if (v > 0)
			printf("T");
		v--;
	} while (z>0||x>0||c>0||v>0);
	return 0;
}