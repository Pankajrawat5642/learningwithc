#include<stdio.h>
#include<stdlib.h>
void main()
{
        char s;
        char *ptr=(char*)malloc(1);
        printf("Enter your string: ");
        scanf("%c ",&s);
        int choice=s;
        int t=1,i=0;
        while(choice!=10)
        {
                ptr[i++]=s;
                ptr=(char*)realloc(ptr,++t);
                scanf("%c",&s);
                ptr[i]=s;
                choice=s;
        }
	for(int i=t;i>=0;i--)
	{
		int temp=ptr[i];
		if(temp==' '||temp==ptr[0])
		{
			if(i==0)
			{
				printf("%c",ptr[i]);
			}
			for(int j=i+1;j<t-1;j++)
			{
				printf("%c",ptr[j]);
		
			}
			printf(" ");
			t=i+1;
		}
	}
}


