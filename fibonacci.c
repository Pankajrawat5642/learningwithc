#include<stdio.h>
void fibonacci(int, int , int);
void main()
{
	int a=0,b=1,n;
	printf("Enter number:");
	scanf("%d",&n);
	fibonacci(n,a,b);
}
void fibonacci(int n,int a, int b)
{
	int fib =0;
	for(int i=0;i<n;i++)
	{
		fib+=a;
		printf("%d ",fib);
		a=b;
		b=fib;
	}

}

