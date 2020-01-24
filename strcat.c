#include<stdio.h>
int strlength(char []);
void stringconcat(char string1 [],char string2[])
{
	int i,j=strlength(string1);
	for(i=0;i<strlength(string2)+1;i++)
	{
		string1[++j]=string2[i];
	
	}
	string2[j]='\0';
	printf("%s",string1);
	
}
