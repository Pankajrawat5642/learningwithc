#include<stdio.h>
#include<stdlib.h>

void main()
{
	char s,*ptr=(char*)malloc(1);
	printf("Enter your string: ");
	scanf("%c",&s);
	int i=0,t=1,check=s;
	while(check!=10)
	{
		ptr[i++]=s;
		ptr=(char*)realloc(ptr,t++);
		scanf("%c",&s);
		ptr[i]=s;
		check=s;
	}
	int len=t-1;
	for(int j=0;j<len;j++)
	{
		int k=j+1;
		while(k<len)
		{
			if(ptr[j]==ptr[k])
			{
				for(int l=k;l<len;l++)
				{
					ptr[l]=ptr[l+1];
				}
				--len;
			}
			k++;
		}
	}
		
	printf("%s",ptr);

}
