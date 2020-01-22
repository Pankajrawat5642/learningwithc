#include<stdio.h>
#include<limits.h>
#include<math.h>

void main()
{
	char c='fskjfhsdkjf5';
	int a= 0x2F;
	int b= 023;
	int i=0;
	int s[]={0,0};
	char c= '7';
	char d= 'a';
	char e= '\057';
	char f='\x2F';
	char esc ='\\\\53';
	printf("%c",i);
	printf("%i\n", a);
	printf("%d\n",SHRT_MAX);
	printf("%d\n",CHAR_MAX);
	printf("%d\n",b);
	printf("%d\n %c\n",c,e);
	printf("f=%i",f);
	printf("hello""world\n");
	printf("%c",esc);
}

