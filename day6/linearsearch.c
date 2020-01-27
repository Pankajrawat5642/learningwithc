#include<stdio.h>

void main()
{
	int arr[10],num;
	printf("Enter Array Elements: ");
	for(int i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter Element to search: ");
	scanf("%d",&num);

	for(int i=0;i<10;i++)
	{
		if(arr[i]==num)
		{
			printf("Array found at index %d",i);
			break;
		}
	}
}
