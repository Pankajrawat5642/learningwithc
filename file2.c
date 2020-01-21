#include<stdio.h>

void main()
{
	float choice=12.3;
	switch ((float)choice)
		
	{
		case 12.0:
			printf("first");
			break;
		case 12.1:
			printf("second");
			break;
		case 12.2:
			printf("third");
			break;
		case 12.3:
			printf("four");
		case 'a':
			printf("five");
			break;
		default:
			printf("six");
			break;
	}
}

