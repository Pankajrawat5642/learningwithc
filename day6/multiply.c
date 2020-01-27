#include<stdio.h>

void multi(int arr1[][3],int arr2[][3]);

void main()
{
	int arr1[3][3],arr2[3][3],arr3[3][3];
	printf("Enter element in matrix1 :");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			scanf("%d",&arr1[i][j]);
		}
	}
	printf("Enter elements in marrix2: ");
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			scanf("%d",&arr2[i][j]);
		}
	}

	multi(arr1,arr2);

}

void multi(int arr1[][3],int arr2[][3])
{
	int arr3[3][3];
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			int k=0,multi=0;
			while(k<3)
			{
				multi+=arr1[i][k]*arr2[k][j];
				k++;
			}
			arr3[i][j]=multi;
		}
	}
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			printf("%d ",arr3[i][j]);
		}
		printf("\n");
	}

}
