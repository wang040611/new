#include<stdio.h>
#include<string.h>
int main()
{
    int n = 0;
    char ch = 0;
    scanf("%d %c ",&n,&ch);
    char arr[40000]={0};
    gets(arr);
    int len = strlen(arr);
    if(len>=n)
    {
        int i = 0;
        for(i=len-n;i<len;i++)
        {
            printf("%c",arr[i]);
        }
    }
    else if(len<n)
    {
        int rem=n-len;
        int j = 0;
        for(j=0;j<rem;j++)
        {
            printf("%c",ch);
        }
        puts(arr);
    }
    return 0;
}