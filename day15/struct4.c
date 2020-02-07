#include<stdio.h>
void main()
{
	struct demo
	{
		int arr[10];
	}obj[2];

	printf("Enter elements: \n");
	for(int i=0;i<2;i++)
	{
		printf("enter obj%d data\n",i);
		for(int j=0;j<10;j++)
		{
			scanf("%d",&obj[i].arr[j]);
		}
		
	}
	int i=0;
	printf("Result is: ");
	for(int j=0;j<10;j++)
	{
		for(int k=0;k<10;k++)
		{
			if(obj[i].arr[j]==obj[i+1].arr[k] && obj[i].arr[j]%2!=0)
			{
				printf("%d ",obj[i].arr[j]);
			}
		}
	}
}
