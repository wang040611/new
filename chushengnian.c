#include<stdio.h>
int main()
{
	int year,weishu,arr[10]={0},b=0,temp=0,sum=0;
	//输入年份和位数 
	scanf("%d %d",&year,&weishu);
	for(int i=year;;i++)
	{
		temp=i;
		//取变量year中的每一位，作为数组的下标存入数组、
		//因为题意要求 年份最大为3000 最大为四位数 除四次 故下方循环四次 
		//一个数求余数是取个位 整除10是去掉各位 
		for(int h=0;h<4;h++)
		{
			b=temp%10;
			arr[b]++;
			temp=temp/10;
		} 
		//计算数组中不同数字的总个数 
		for(int j=0;j<10;j++)
		{
			if(arr[j]!=0)
			sum++;
		}
		//如果数组中不同数字的总个数和目标个数相等 进行输出 
		if(sum==weishu)
		{
			printf("%d %04d",i-year,i);
			break;
		}
		//将数组和数字总个数初始化为0 
		for(int i=0;i<10;i++)
		{
			arr[i]=0;
		}
		sum = 0;
	}
	return 0;
}
