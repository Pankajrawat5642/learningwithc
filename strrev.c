#include<stdio.h>
int strlength(char []);

void stringreverse(char string[])
{
	int p=strlength(string);
	for(int i=p-1;i>-1;i--)
	{
		printf("%c",string[i]);
	}
}


