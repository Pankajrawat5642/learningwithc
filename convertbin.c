#include<stdio.h>
#include<math.h>
int convertbin(int);
void main()
{
	int num,rev,ans;
	printf("Enter number: ");
	scanf("%d",&num);
	ans=convertbin(num);
	printf("%d",ans);
}
int convertbin(int num)
{
	int i=0,temp=num,bin=0;
	while(temp!=0)
	{
		bin=bin+temp%2*pow(10,i++);
		temp/=2;
	}
	return bin;



}

