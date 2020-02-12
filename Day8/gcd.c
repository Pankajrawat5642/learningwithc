#include<stdio.h>
int gcd(int,int);
int lcm(int,int);

void main()
{
	int num1,num2,choice;
	printf("Enter two numbers:");
	scanf("%d%d",&num1,&num2);
	int hcf=gcd(num1,num2);
	int lc=lcm(num1,num2);
	printf("GCD of %d and %d is %d\n",num1,num2,hcf);
	printf("LCM of %d and %d is %d",num1,num2,lc);
}

int gcd(int num1,int num2)
{
	int gcd=0;
	for(int i=2;i<=num1&&i<=num2;i++)
	{
		if(num1%i==0 && num2%i==0)
		{
			gcd=i;
		}
	}
	return gcd;
}

int lcm(int num1,int num2)
{
	int max=num1>num2?num1:num2;
	while(1)
	{
		if(max%num1==0 && max%num2 ==0)
		{
			return max;
			break;
		}
		max++;
	}
}
