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
        for(int i=0;i<=t;i++)
        {
                int temp=ptr[i];
		int p=0;
                if(temp==' ' || temp==ptr[t])
                {
   		
			if(i==t)
			{
				printf("%c",ptr[i]);
			}
                        for(int j=i-1;j>=p;j--)
                        {
                                printf("%c",ptr[j]);

                        }
			p=i;
                        printf(" ");
                        
                }
        }
}

