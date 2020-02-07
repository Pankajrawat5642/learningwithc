#include<stdio.h>

void main()
{
	struct demo
	{
		int arr[10];
	}obj[2];
	printf("Enter elements:");
	for(int j=0;j<2;j++)
	{
		for(int i=0;i<10;i++)
		{
			scanf("%d",&obj[j].arr[i]);
		}
	}
	printf("numbers that are divisible by 2:");
	for(int j=0;j<2;j++)
	{
		for(int i=0;i<10;i++)
		{
			if(obj[j].arr[i]%2 == 0)
			{
				printf("%d  ",obj[j].arr[i]);
			}
		}
		printf("\n");
	}
}

