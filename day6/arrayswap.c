#include<stdio.h>
void main()
{
	int arr[10],temp,i;
	printf("Enter 10 array Elements: ");

	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);

	}
	for(int j=0;j<5;j++)
	{
		temp=arr[j];
		arr[j]=arr[10-j-1];
		arr[10-j-1]=temp;
	}
	printf("Elements after performing swapping: ");

	for(int k=0;k<10;k++)
	{ 
		printf("%d ",arr[k]);
	}
	


}
