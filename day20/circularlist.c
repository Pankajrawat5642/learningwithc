#include<stdio.h>
#include<stdlib.h>
struct circle{
	int data;
	struct circle *next;
};

struct circle *head=NULL,*last;
void insert_first();
void insert_last();
void insert_anywhere();
void printcircle();
void delete_first();
void delete_anywhere();
void delete_last();
void main()
{
	printf("choices\n1:insert at first\n2:insert at last\n3:insert at specfic location\n4:delete at first\n5:delete at last\n6:delete at any location\n7:print\n");
	int choice;
	do
	{
		printf("Enter your choice: ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:	insert_first();
				break;
			case 2: insert_last();
				break;
			case 3: insert_anywhere();
				break;
			case 4: delete_first();
				break;
			case 5: delete_last();
				break;
			case 6: delete_anywhere();
				break;
			case 7:	printcircle();
				break;

		}
	}
	while(choice<7);
}

void insert_last()
{
	struct circle *newnode,*current;
	newnode=(struct circle*)malloc(sizeof(struct circle));
	printf("Enter data to be inserted on last: ");
	scanf("%d",&(newnode->data));
	newnode->next=NULL;

	if(head==NULL)
	{
		head=newnode;
		head->next=head;
	}
	else
	{
		current=head;
		while(current->next!=head)
		{
			current=current->next;
		}
		current->next=newnode;
		newnode->next=head;
	}
}

void insert_first()
{
	struct circle *newnode,*current;
	newnode=(struct circle *)malloc(sizeof(struct circle));
	printf("Enter data to be insert at first: ");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	if(head==NULL)
	{
		head=newnode;
		head->next=head;
	}
	else
	{
		current=head;
		while(current->next!=head)
		{
			current=current->next;
		}
		newnode->next=head;
		head=newnode;
		current->next=head;
	}
}


void insert_anywhere()
{
	struct circle *newnode,*current=head;
	newnode=(struct circle *)malloc(sizeof(struct circle));
	int n;
	printf("Enter element and its position: ");
	scanf("%d %d",&newnode->data,&n);
	for(int i=0;i<n-2;i++)
	{
		current=current->next;
	}
	newnode->next=current->next;
	current->next=newnode;
}

void delete_first()
{
	printf("Deleting element from first\n");
	struct circle *ptr;
	ptr=head;
	while(ptr->next!=head)
	{
		ptr=ptr->next;
	}
	ptr->next=head->next;
	ptr=head;
	head=head->next;
	free(ptr);
	printf("Element Deleted\n");
}

void delete_last()
{
	struct circle *ptr,*rtr;
	ptr=head;
	int count =0;
	printf("Deleting from last\n");
	while(ptr->next!=head)
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
	ptr->next=head;
	free(rtr);
	printf("Last element deleted\n");
}

void delete_anywhere()
{
	struct circle *ptr,*rtr;
	int n;
	ptr=head;
	printf("Enter the location to be deleted: ");
	scanf("%d",&n);
	for(int i=0;i<n-2;i++)
	{
		ptr=ptr->next;
	}
	if(ptr->next!=head)
	{
		rtr=ptr->next;
		ptr->next=ptr->next->next;
	}
	else
		delete_last();
	free(rtr);
}


void printcircle()
{
	struct circle *ptr;
	ptr=head;
	while(ptr->next!=head)
	{
		printf("%d ",ptr->data);
		ptr=ptr->next;
	}
	printf("%d",ptr->data);
	

}
