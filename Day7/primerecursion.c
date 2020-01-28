#include<stdio.h>
void prime(int,int);

void main()
{
	int num,a=2;
	printf("Enter number: ");
	scanf("%d",&num);
	prime(num,a);
}
void prime(int num,int a)
{
	if(num==a);
	else
	{
	int flag=0;
	for(int i=2;i<a;i++)
	{
		if(a%i==0)
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
		printf("%d ",a);
	prime(num,++a);
}
}

