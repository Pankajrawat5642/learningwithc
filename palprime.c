#include<stdio.h>
void palprime(int);
void main()
{
	int n;
	printf("Enter number to check: ");
	scanf("%d",&n);
	palprime(n);

}
void palprime(int n)
{
	int i, state=0,reverse=0;
	for(i=2;i<n;i++)
	{
		if(n%i==0)
			state=1;
	}
	if (state==0)
	{
		int temp = n;
		while(temp!=0)
		{
			int remind=temp%10;
			reverse =reverse*10+remind;
			temp=temp/10;
		}
		if(n==reverse)
		{
			printf("%d is a palprime number",n);
		}
		else
			printf("%d is not palprime",n);
	}
	else
		printf("not even prime");
}
