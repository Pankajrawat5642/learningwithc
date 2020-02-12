#include<stdio.h>
void main()
{
	int p=20;
	int *ip=&p;
	printf("value of ip %p\n",ip);

	int a=10,b=15,c=20;

	int q=*ip++;
	printf("value of q %d\n",q);
	printf("address of ip after postincrement %p\n",ip);
	printf("address of q %p\n",&q);
	//printf("%d\n",p);
//	printf("%d\n",(*ip)++);
//	printf("%d",p);
}
