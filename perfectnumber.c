#include<stdio.h>

void perfect(int);
int main()
{
	int n;
	printf("Enter number to check: ");
        scanf("%d",&n);

	perfect(n);
}

void perfect(int n)
{
	int sum=0;
	for(int i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum+=i;
		}
	}
	if(sum==n)
		printf("%d is a perfect number",n);
	else
		printf("Not a perfect number");
}
