#include<stdio.h>							

int main()
{
	int z,x=0;
	int y=x+3;
	switch (y) {
	case 0:
			printf("first");
			break;
	case 1:
			printf("second");
			break;
	case 2:
			printf("two");
			break;
	case 3:
			switch (z) {
	case 3:
				printf("nested switch");
				
	default:
				printf("hey");
				
			}
	default: 
			while(y)
			{
				printf("while");
				break;
			}
	}
	return 0;
}
