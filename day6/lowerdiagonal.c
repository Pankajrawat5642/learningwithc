#include<stdio.h>

void main()
{
	int arr[4][4];
	printf("Enter Elements: ");
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	
	}
	int sum=0;
	for(int i=0;i<4;i++)
	{
	for(int j=0;j<4;j++)
	{
		if(i>j)
		{
			sum+=arr[i][j];
		}
	}
	}
	printf("%d",sum);
}

