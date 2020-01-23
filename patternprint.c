#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
    int i=0,j=0,m1,m2,min;
    int len=2*n-1;
    for(i=0;i<len;i++)
    {
        for(j=0;j<len;j++)
        {
            min = (m1 =i>len-1-i?len-1-i:i)>(m2=j>len-1-j?len-1-j:j) ?m2:m1;
            printf("%d ",n-min);
        }
        printf("\n");
    }
    return 0;
}


