#include<stdio.h>

void main()
{
	int n,arr[10][10];
	printf("Enter size of the matrix: ");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	int t=0;
	for(int j=0;j<n;j++)
	{
		while(t<n)
		{
			printf("%d ",arr[j][t]);
			t+=2;
		}
		t=t%n;
	}
}
