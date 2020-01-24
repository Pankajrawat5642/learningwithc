#include<stdio.h>
int arr[10];
void main()
{
	int num1,num2;
	printf("enter two numbers: ");
	scanf("%d %d",&num1,&num2);
}

void anagram(int num1, int num2)
{
	int flag=0;
	while(num1!=0)
	{
		int remain;
		remain=num1%10;
		arr[remain]++;
		num1=num1/10;
	}

	while(num2!=0)
	{
		int remain;
		remain=num2%10;
		arr[remain]--;
		num2=num2/10;
	}
	
	for(int i=0;i<10;i++)
	{
		if(arr[i]!=0)
		{
		flag=1;
		break;
		}
	}
	if(flag==0)
	{
	printf("anagrams");

}
else
printf("not anagrams");
}


