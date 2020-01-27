#include<stdio.h>

void main()
{
	int arr[10],num,flag=0,mid,low=0,high=9;
	printf("Enter 10 array elements: ");
	for(int i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter element to search: ");
	scanf("%d",&num);
	while(low<=high)
	{
	mid=(low+high)/2;

	if(num<arr[mid])
	{
		high=mid-1;
	}
	else if(num>arr[mid])
	{
		low=mid+1;
	}
	else 
	{
		printf("Element found at index %d",mid);
	        flag=1;
		break;
	}
	}
	if(flag==0)
                 {
                        printf("Element is not in array");
                 }

}
