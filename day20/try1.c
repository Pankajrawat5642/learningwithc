#include<stdio.h>
#include<stdlib.h>
struct linked
{
	int data;
	struct linked *next;
};
struct linked *head=NULL;
void insert_last();
void insert_first();
void delete_first();
void insert_anywhere();
void printlink();
void delete_last();
void delete_anywhere();
void deletelink();
void reverse();
void main()
{
	printf("choices:\n1.Insert at first\n2.Insert at last\n3.Insert Anywhere\n4.Delete first\n5.Delete last\n6.Delete anywhere\n7.Delete any data\n8.Reverse\n9.Print\n");
	int choice;
	do{
	printf("Enter your choice: ");
	scanf("%d",&choice);

	switch(choice)
	{
		case 1:
			insert_first();
			break;
		case 2:
			insert_last();
			break;
		case 3:
			insert_anywhere();
			break;
		case 4:
			delete_first();
			break;
		case 5: delete_last();
			break;
		case 6: delete_anywhere();
			break;
		case 7: deletelink();
			break;
		case 8: reverse();
			break;
		case 9:
			printlink();
			break;
	}
	}
	while(choice<9);	
}

void reverse()
{
	int count=0;
	struct linked *ptr;
	ptr=head;
	while(ptr->next!=NULL)
	{
		count++;
		ptr=ptr->next;
	}
	printf("Reverse is: ");
	do
	{
		ptr=head;
		for(int i=0;i<count;i++)
		{
			ptr=ptr->next;
		}
		printf("%d ",ptr->data);
		count--;
	}
	while(count!=0);
	ptr=head;
	printf("%d\n",ptr->data);

}


void insert_last()
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
void insert_first()
{
	struct linked *ptr,*newnode;
	newnode=(struct linked*)malloc(sizeof(struct linked));
	printf("Enter to be inserted on first: ");
	scanf("%d",&(newnode->data));
	ptr=head;
	head=newnode;
	newnode->next=ptr;
}

void insert_anywhere()
{
	struct linked *newnode,*ptr;
	int n;
	newnode=(struct linked*)malloc(sizeof(struct linked));

	printf("Enter Element and position to be inserted: ");
	scanf("%d %d",&newnode->data,&n);
	newnode->next=NULL;
	ptr=head;
	for(int i=0;i<n-2;i++)
	{
		ptr=ptr->next;
	}
	newnode->next=ptr->next;
	ptr->next=newnode;
}
void delete_first()
{
	printf("deleting at first\n");
	struct linked *ptr;
	ptr=head;
	head=head->next;
	free(ptr);
}

void delete_last()
{
	printf("Deleting at last\n");
	struct linked *ptr,*rtr;
	int count=0;
	ptr=head;
	while(ptr->next!=NULL)
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
	ptr->next=NULL;
	free(rtr);
}
	
void delete_anywhere()
{
	int n;
	struct linked *ptr,*rtr;
	printf("Enter the location that you want to delete: ");
	scanf("%d",&n);
	ptr=head;
	for(int i=0;i<n-2;i++)
	{
		ptr=ptr->next;
	}
	rtr=ptr->next;
	ptr->next=ptr->next->next;
	free(rtr);
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
 
