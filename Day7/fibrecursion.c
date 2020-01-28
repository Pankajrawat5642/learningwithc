#include<stdio.h>
int fibonacci(int);
void main()
{
	int num;
	printf("Enter Number: ");
	scanf("%d",&num);
	for(int i=0;i<num;i++)
	{
	int p=fibonacci(i);
	printf("%d ",p);
	}
}

int fibonacci(int num)
{
	if(num<=1)
		return num;
	else
		return fibonacci(num-1)+fibonacci(num-2);
}
