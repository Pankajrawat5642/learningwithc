#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
#include<stdarg.h>
#include<ctype.h>
int main()
{
	char string[100];
	printf("Enter hexadecimal number: ");
	scanf("%[^\n]s",string);
	int a=strlen(string)-1;
	int num=0;
	printf("%s\n",string);
	for(int i=2;i<strlen(string);i++)
	{
		int c=string[i];
		if(isdigit(c))
			c-=48;
		else
			c-=55;
		printf("%i\n",c);
		num= num + c*pow(16, a-i);

	}
	printf("%d",num);
	return 0;

	
}

