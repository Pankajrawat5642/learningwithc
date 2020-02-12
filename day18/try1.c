#include<stdio.h>
#include<stdlib.h>
struct linked
{
	int data;
	struct linked *next;
};
struct linked *head=NULL;
void insert();
void printlink();
void deletelink();
void main()
{
	int choice;
	do{
	printf("Enter your choice: ");
	scanf("%d",&choice);

	switch(choice)
	{
		case 1:
			insert();
			break;
		case 2:
			deletelink();
			break;
		case 3:
			printlink();
			break;
	}
	}
	while(choice<3);	
}

void insert()
{
	struct linked *temp=NULL,*ptr;
	temp=(struct linked *)malloc(sizeof(struct linked));
	printf("Enter data:");
	scanf("%d",&temp->data);
	temp->next=NULL;
	if(head==NULL)
	{
		head=temp;
		head->next=NULL;
	}
	else
	{
		ptr=head;
		while(ptr->next!=NULL)
		{
			ptr=ptr->next;
			
		}
		ptr->next=temp;
	}
}
void printlink()
{
	struct linked *ptr;
	ptr=head;
	while(ptr!=NULL)
	{
		printf("%d ",ptr->data);
		ptr=ptr->next;
	}
}

void deletelink()
{
	struct linked *ptr,*rtr;
	ptr=head;
	int num,count=0;
	printf("Enter number you want to delete: ");
	scanf("%d",&num);
	if(head==NULL)
	{
		printf("Linked list is empty\n");
	}
	else
	{
		if(head->data==num)
		{
			head=head->next;
			free(ptr);
		}
		else
		{
			while(ptr->data!=num)
			{
				count++;
				ptr=ptr->next;
			}
			ptr=head;
			for(int i=0;i<count-1;i++)
			{
				ptr=ptr->next;
			}
			rtr=ptr->next;
			ptr->next=ptr->next->next;
			free(rtr);
		}
	
	}
}
 
