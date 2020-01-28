#include<stdio.h>
void main()
{
	int n,arr[10];
	printf("Enter size of the array: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++)
	{
		int loc=i;
		int min=arr[loc];
		for(int j=i+1;j<n;j++)
		{
			if(min>arr[j])
			{
				min=arr[j];
				loc=j;
			}
		}
	        int temp=arr[i];
		arr[i]=arr[loc];
		arr[loc]=temp;
	}
	for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}

