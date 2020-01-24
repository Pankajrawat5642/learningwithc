#include<stdio.h>
int genericroot(int);

void main()
{
	int num;
	printf("Enter number; ");
	scanf("%d",&num);
	int root=genericroot(num);
	printf("root of the given number is %d",root);
}

int genericroot(int num)
{
	int remain;
	while(num>=10)
	{
		int sum=0;
		while(num!=0)
		{
			remain=num%10;
			sum+=remain;
			num=num/10;
		}
		num=sum;
	}
	return num;
}
