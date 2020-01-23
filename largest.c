#include<stdio.h>
void largest(int);
void main()
{
	int num;
	printf("Enter number: ");
	scanf("%d",&num);
	largest(num);
}

void largest(int num)
{
	int temp=num,remain,i=0,arr[10],count1=0;
	while(temp!=0)
	{
		count1++;
		remain=temp%10;
		arr[i++]=remain;
		temp=temp/10;
	}
	for(int j=0;j<count1;j++)
	{
		int count2=0;
		for(int k=0;k<count1;k++)
		{
			if(arr[j]<arr[k])
			{
				++count2;
			}
		}
		if(count2==2){
                                printf("%d",arr[j]);
                        }

	}
	
}

