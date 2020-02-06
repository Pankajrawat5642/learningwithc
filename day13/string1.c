#include<stdio.h>
#include<stdlib.h>
void main()
	
{
	int n,row=14;
	printf("Enter No. of string:");
	scanf("%d",&n);
	char **ptr=(char**)malloc(n*sizeof(char*));
	printf("Enter your string: ");
	for(int i=0;i<n;i++)
	{
		int t=1,j=0;
		ptr[i]=(char*)malloc(1);
		int check;
		char s;
		scanf(" %c",&s);
		check=s;
		while(check!=10)
		{
			ptr[i]=(char *)realloc(ptr[i],++t);
			ptr[i][j]=s;
			scanf("%c",&s);
			check=s;
			j++;
		}
		ptr[i][j+1]='\0';
	}
	for(int i=0;i<n;i++)
	{
		printf("%s",ptr[i]);
		printf("\n");
	}
}



