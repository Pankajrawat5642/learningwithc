#include<stdio.h>
#include<stdlib.h>
void main()
{
	char s;
	char *ptr=(char*)malloc(1);
	printf("Enter your string: ");
	scanf("%c",&s);
	int choice=s;
	int t=1,i=0;
	while(choice!=10)
	{
		ptr[i++]=s;
		ptr=(char*)realloc(ptr,++t);
		scanf("%c",&s);
		ptr[i]=s;
		choice=s;
	}
	for(int j=i;j>=0;j--)
	{
		printf("%c",ptr[j]);
	}
	printf("\n");

}

