#include<stdio.h>

void main()
{
	int num,remain;
	printf("enter number: ");
	scanf("%d",&num);
	int sum=0;
	while(num>=10)
	{
		remain=num%10;
		sum+=remain;
		num=sum;
	}
	printf("%d",sum);
}


