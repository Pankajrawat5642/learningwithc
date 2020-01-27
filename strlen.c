#include<stdio.h>
int strlength(char []);
int stringcompare(char [], char[]);
void stringconcat(char [], char[]);
int main()
{
	char string[100],string1[100],string2[100];
	//printf("Enter string: ");
	//scanf("%[^\n]*c",string);
	//int p=strlength(string);
	//printf("Enter two strings to compare: ");
	//scanf("%[^\n]s",string1);
	//scanf(" %[^\n]s",string2);
	//stringconcat(string1,string2);
	//int p=stringcompare(string1,string2);
	//printf("compare:%d",p);
	printf("Enter string to reverse:");
	scanf("%[^\n]*c",string);
	stringreverse(string);
	return 0;
}
int strlength(char string[])
{
	int i=0,count=0;
	while(string[i++]!='\0')
	{
		count++;
	}
	return count;
}

int stringcompare(char string1[], char string2[])
{
	if(strlength(string1)<=strlength(string2))
	{
		for(int i=0;i<strlength(string1);i++)
		{
			if(string1[i]>string2[i])
			{
				return string1[i]-string2[i];
			}
			else if(string1[i]<string2[i])
			{
				return string2[i]-string1[i];
			}
			else 
				return 0;
		}
	}
	else
	{
		for(int i=0;i<strlength(string2);i++)
                {
                        if(string1[i]>string2[i])
                        {
                                return string1[i]-string2[i];
                        }
                        else if(string1[i]<string2[i])
                        {
                                return string2[i]-string1[i];
                        }
                        else
                                return 0;
                }
	}
}




