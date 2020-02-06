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
	int len=t-1,n;
	char value;
	printf("Enter the character you want to insert: ");
	scanf("%c",&value);
	printf("Enter the location at which you want to insert:");
	scanf("%d",&n);
	for(i=len;i>n;i--)
	{
		ptr[i]=ptr[i-1];
	}
	ptr[n]=value;
	ptr[len+1]='\0';
	printf("%s",ptr);
}

