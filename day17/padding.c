#include<stdio.h>
struct demo{
	char ch1;
	int i1;
}obj;
void main(){
obj.ch1='a';
obj.i1=11;
struct demo *ptr1=&obj;
char *ptr2=&obj.ch1;
int *ptr3=&obj.i1;
printf("%p\n",ptr1);
printf("%p\n",ptr2);
printf("%p\n",ptr3);
printf("%p\n",++ptr3);
printf("Size of structure:%d ",sizeof(struct demo));
}
