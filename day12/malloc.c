#include<stdio.h>
#include<stdlib.h>
void getdata(int**,int**,int**,int,int);
void processdata(int**,int**,int**,int,int);
void printdata(int**,int**,int**,int,int);

void main()
{
	int row,column, **ptr,**qtr,**rtr;
	printf("Enter no. of rows and column of the array: ");
	scanf("%d%d",&row,&column);
	ptr=(int**)calloc(row,sizeof(int *));
	qtr=(int **)calloc(row,sizeof(int*));
	rtr=(int **)calloc(row,sizeof(int *));
	void (*fptr)(int**,int**,int**,int,int);
	fptr=getdata;
	fptr(ptr,qtr,rtr,row,column);
	fptr=processdata;
	fptr(ptr,qtr,rtr,row,column);
	fptr=printdata;
	fptr(ptr,qtr,rtr,row,column);
}
void getdata(int **ptr,int **qtr,int** rtr,int row,int column)
{
	for(int i=0;i<row;i++)
        {
                ptr[i]=(int *)malloc(column*sizeof(int));
        }
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		{
			scanf("%d",&(ptr[i][j]));
		}
	}

        for(int i=0;i<row;i++)
        {
                qtr[i]=(int *)malloc(column*sizeof(int));
        }
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		{
			scanf("%d",&(qtr[i][j]));
		}
	}
}
void processdata(int **ptr, int **qtr,int **rtr,int row,int column)
{
	for(int i=0;i<row;i++)
        {
                rtr[i]=(int *)malloc(column*sizeof(int));
        }
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		{
			int k=0,multi=0;
			while(k<row)
			{
				multi+=ptr[i][k]*qtr[k][j];
				k++;
			}
			rtr[i][j]=multi;
		}
	}
}
void printdata(int **ptr,int **qtr,int **rtr,int row,int column)
{
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<column;j++)
		{
			printf("%d ",rtr[i][j]);
		}
	}
}






	

