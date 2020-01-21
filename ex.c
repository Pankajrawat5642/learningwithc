#include <stdio.h>
#include <string.h>
void main()
{
	char s1[]="mayank";
	char s2[]="pankaj";
	int i,j,k;
	for(i=0;i<strlen(s1);i++)
	{
		for(j=0;j<strlen(s2);j++)
		{
			if(s1[i] == s2[j])
			{
				for(k=i;k<strlen(s1);k++)
				{
					s1[k]=s1[k+1];
				}
			}
		}
	}
	printf("%s",s1);
	printf("%d",strlen(s2));
					
}
