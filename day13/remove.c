#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include<string.h>
void main()
{
        char s,*ptr=(char*)malloc(20);
        printf("Enter your string: ");
        scanf("%[^\n]s",ptr);
        int p=strlen(ptr);
	for(int i=0;i<p;i++)
	{
		if(ptr[i]==' ')
		{
			int j=i;
			while(j!=p)
			{
				ptr[j]=ptr[j+1];
				j++;
			}
		}
	}
	printf("%s",ptr);
}
