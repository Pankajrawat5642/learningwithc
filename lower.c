#include<stdio.h>
#include<string.h>
int main()
{	int i;
	char string[100]="PANkajghvv";
	char strr[100];
	for(i=0;i<strlen(string);i++)
	{
		if(string[i]>='A' && string[i]<= 'Z')
			strr[i]=string[i]+32;
		else
			strr[i]=string[i];
	}
	for(i=0;i<strlen(string);i++)
	{
		printf("%c",strr[i]);
	}
	return 0;

}
