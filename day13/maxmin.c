#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
#include<string.h>
void main()
{
        char s,*ptr=(char*)malloc(20);
        printf("Enter your string: ");
        scanf("%[^\n]s",ptr);
	int p=strlen(ptr);
	int count1 =0,max=0,min=INT_MAX,count2=0;

	for(int i=0;i<p+1;i++)
	{
		if(ptr[i]==' '||ptr[i]=='\0')
		{
			if(count1>max)
			{
				max=count1;
			}
			count1=0;
			if(count2<min)
			{
				min=count2;
			}
			count2=0;
		}
		else
		{
			count1++;
			count2++;
		}
	}
	printf("maximum is %d\n",max);
	printf("minimum is %d",min);
       

/*	printf("Maximun length is %d\n",max);
	printf("Minimum length is %d",min);*/

	free(ptr);
}

