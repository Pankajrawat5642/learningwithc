#include<stdio.h>

void main()
{
	char arr[10];
	printf("Enter elements in character array: ");
	for(int i=0;i<10;i++)
	{
		scanf("%c ",&arr[i]);
	}
	char max=arr[0];
	for(int i=1;i<10;i++)
	{
		if(max<arr[i])
		{
			max=arr[i];
		}
	}
	printf("MAX IS %c\n",max);
	char min=arr[0];
	for(int i=1;i<10;i++)
	{
		if(min>arr[i])
		{
			min=arr[i];
		}
	}
	printf("MIN IS %c",min);
}
	
