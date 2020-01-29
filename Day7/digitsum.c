#include<stdio.h>
int find_sum(int);
void main()
{
	int num;
	printf("Enter Number:");
	scanf("%d",&num);
	int p=find_sum(num);
	printf("Sum of the digit is: %d ",p);
}
int find_sum(int num)
{
	if(num==0)
		return 0;
	else
		return num%10+find_sum(num/10);
}
