#include<stdio.h>
int find_char(char [],int);
void main()
{
	int i=0;
	char string1[100];
	printf("Enter String: ");
	scanf("%[^\n]*c",string1);
	int p = find_char(string1,i);
	printf("Length of the entered string is %d", p);
}

int find_char(char string[],int i)
{
	int count=0;
	if(string[i]=='\0')
		return 0;
	else
	{
		count++;
		i++;
		return count+find_char(string,i);
	}
}


