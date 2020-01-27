#include<stdio.h>

void main()
{
	int i,j,k,n,l=1;
	printf("Enter number of rows: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
		{
			printf(" ");
		}

		for(k=1;k<=i;k++)
		{

			if(i%2!=0)
			{	printf("* ");
				l=l+1;
			}
			else
			{
				printf("%d ",l);
				l=l+1;
			}
		}
		printf("\n");
	}
}
		
