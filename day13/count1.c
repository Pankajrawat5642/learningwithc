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
	int count=0;
	char ch;
	printf("Enter the character you want to take count: ");
	scanf(" %c",&ch);
	for(int i=0;i<p;i++)
	{
		if(ptr[i]==ch)
		{
			count++;
		}
	}
	printf("Answer: %d",count);
}
