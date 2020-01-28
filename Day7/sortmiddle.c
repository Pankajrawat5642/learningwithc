#include<stdio.h>
void main()
{
	int arr[5][5],n,mid;
	printf("Enter size of the matrix:");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	mid=n/2;
	for(int i=0;i<n;i++)
	{
		int min=arr[mid][i];
		int loc=i;
		for(int j=i+1;j<n;j++)
		{
			if(min>arr[mid][j])
			{
				min=arr[mid][j];
				loc=j;
			}
		}
	int temp=arr[mid][i];
	arr[mid][i]=arr[mid][loc];
	arr[mid][loc]=temp;
	}
	for(int i=0;i<n;i++)
	{
	for(int j=0;j<n;j++)
	{
		printf("%d ",arr[i][j]);
	}
	printf("\n");
	}
}
