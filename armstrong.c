#include<stdio.h>
#include<math.h>

void main()
{
	int i;
	for(i=1;i<1000;i++)
	{
		int remind,re,temp=i,sum=0;
		while(temp!=0)
		{
			remind = temp%10;
			re =pow(remind,3);
			sum+=re;
			temp=temp/10;
		}
		if(sum==i)
		{
			printf("%d=Armstrong\n",i);
		}
	}
}
