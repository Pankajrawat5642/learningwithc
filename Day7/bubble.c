#include<stdio.h>
void bubble(int arr[],int);
void main()
{
	int arr[10],n,temp;
	printf("Enter size: ");
	scanf("%d",&n);
	printf("Enter Array Elements:");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	bubble(arr,n);
}

void bubble(int arr[],int n)
{
	
        for(int i=1;i<=n-1;i++)
        {
		int flag=0;
		for(int j=0;j<=n-i-1;j++)
		{
                if(arr[j]>arr[j+1])
                {
                        int temp=arr[j];
                        arr[j]=arr[j+1];
                        arr[j+1]=temp;
			flag=1;
                }
        }
		if(flag==0)
			break;

	}
	for(int i=0;i<n;i++)
        {
                printf("%d ",arr[i]);
        }

}
