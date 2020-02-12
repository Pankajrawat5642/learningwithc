#include<stdio.h>
void main()
{
	//int i=10;
	//void *p=&i;
	//printf("%f",*(float *)p);
	int *p,i=10;
	*p=&i;
	char *msg="hi";
	printf(msg);
	printf(p);

}
