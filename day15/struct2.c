#include<stdio.h>
#include<stdlib.h>
void main()
{
	struct student
	{
		 int id;
	         char name[10];
       		 float percent;
	};
	int n;
	printf("Enter n: ");
	scanf("%d",&n);
	struct student *stu=(struct student*)malloc(n*sizeof(struct student));
	for(int i=0;i<n;i++)
	{
		printf("Enter student id: ");
		scanf("%d",&stu[i].id);
		printf("Enter student name: ");
		scanf(" %s",stu[i].name);
		printf("Enter student percent: ");
		scanf("%f",&stu[i].percent);
	}

	for(int i=0;i<n;i++)
	{
		printf("Student id: %d\n",stu[i].id);
		printf("Student name: %s\n",stu[i].name);
		printf("Student percent: %.2f\n",stu[i].percent);
	}
}

