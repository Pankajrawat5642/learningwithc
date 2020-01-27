#include<stdio.h>

void main()
{
	int n,k=1;
	printf("Enter number of rows: ");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			printf("%d ",k);
			k=k+2;
			
		}
		printf("\n");

	}
}
