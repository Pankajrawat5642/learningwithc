#include<stdio.h>
#include<stdlib.h>
void main()
{
	struct employee
	{
		int id;
		char name[15];
	};
	int n;
	printf("Enter n: ");
	scanf("%d",&n);

	struct employee *emp = (struct employee *)malloc(n*sizeof(struct employee));
	for(int i=0;i<n;i++)
	{
		printf("\nId for %d employee: ",i+1);
		scanf("%d",&emp[i].id);
		printf("\nName for %d employee: ",i+1);
		scanf("%s",emp[i].name);
	}
	printf("Employee name whose id is divisible by 2\n");
	for(int i=0;i<n;i++)
	{
		if(emp[i].id%2==0)
			printf("%s\n",emp[i].name);
	}
}
