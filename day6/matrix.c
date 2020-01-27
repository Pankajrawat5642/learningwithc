#include<stdio.h>

void main()
{
	int arr[5][5], brr[5][5],crr[5][5];
	printf("Enter elements: ");
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			scanf("%d",&brr[i][j]);
		}
	}
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			crr[i][j]=arr[i][j]+brr[i][j];
		}
	}
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<5;j++)
		{
			printf("%d ",crr[i][j]);
		}
	}
}

