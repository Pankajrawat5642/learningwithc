#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include<string.h>
void main()
{
        char s,*ptr=(char*)malloc(20);
        printf("Enter your string: ");
        scanf("%[^\n]s",ptr);
        int p=strlen(ptr),count=0;
	for(int i=0;i<p;i++)
	{
		if(ptr[i]==' '||ptr[i]=='\0' )
		{
			count++;
		}
	}
	printf("No of words are %d",count+1);
}
