#include<stdio.h>
int bin(int arr[],int,int,int);

void main()
{
	int arr[20],n,num,low=0;
	printf("Enter no of elements in the array: ");
	scanf("%d",&n);
	int high=n-1;
	printf("Enter elements in the array:");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter number you want to search:");
	scanf("%d",&num);
	bin(arr,low,high,num);

}

int bin(int arr[],int low,int high,int num)
{
	int mid=(low+high)/2;
	if(low>high)
		printf("Element is not in array");
	else{
	if(num==arr[mid])
	{
		printf("Element found at %d ",mid);
		return mid;
	}
	else if(num<arr[mid])
	{
		high=mid-1;
		bin(arr,low,high,num);
	}
	else
	{
		low=mid+1;
		bin(arr,low,high,num);
	}
	}

}

