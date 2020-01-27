#include<stdio.h>

void main()
{
	int n,m=7,i,j,k;
	printf("Enter number of rows: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(k=0;k<i-1;k++)
		{
			printf(" ");
		}
		for(j=1;j<=m;j++)
		{
			if(i%2!=0)
			{
				printf("* ");
			}
			else
			{
				printf("$ ");
			}
		}
		m=m-2;
		printf("\n");
	}
}

