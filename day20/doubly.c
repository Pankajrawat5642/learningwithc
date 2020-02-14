#include<stdio.h>
#include<stdlib.h>

struct doubly
{
	int data;
	struct doubly *prev;
	struct doubly *next;
};

struct doubly *head=NULL;
void insertfirst();
void insertlast();
void insertanywhere();
void deletefirst();
void deletelast();
void deleteanywhere();
void display();
void main()
{
	printf("Choices:\n1.Insert first\n2.Insert last\n3.Insert anywhere\n4.deletefirst\n5.Delete last\n6.Delete Anywhere\n7.Print\n");
	int choice;
	do{
	printf("Enter your choice:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: insertfirst();
			break;
		case 2: insertlast();
			break;
		case 3: insertanywhere();
			break;
		case 4: deletefirst();
			break;
		case 5: deletelast();
			break;
		case 6: deleteanywhere();
			break;
		case 7: display();
			break;
	}
	}
	while(choice<7);
}

void insertfirst()
{
	struct doubly *newnode;
	newnode=(struct doubly*)malloc(sizeof(struct doubly));
	printf("Enter data to insert at first: ");
	scanf("%d",&(newnode->data));
	newnode->prev=NULL;
	newnode->next=NULL;
	if(head==NULL)
	{
		head=newnode;
	}
	else
	{
		head->prev=newnode->next;
		newnode->next=head;
		head=newnode;
	}
}

void insertlast()
{
	struct doubly *newnode,*ptr;
        newnode=(struct doubly*)malloc(sizeof(struct doubly));
        printf("Enter data to insert at last: ");
        scanf("%d",&(newnode->data));
        newnode->prev=NULL;
        newnode->next=NULL;
	if(head==NULL)
	{
		head=newnode;
	}
	else
	{
		ptr=head;
		while(ptr->next!=NULL)
		{
			ptr=ptr->next;
		}
		ptr->next=newnode;
		newnode->prev=ptr;
	}
}

void insertanywhere()
{
	struct doubly *newnode,*ptr;
	int pos;
        newnode=(struct doubly*)malloc(sizeof(struct doubly));
        printf("Enter data to insert and its position: ");
        scanf("%d %d",&(newnode->data),&pos);
        newnode->prev=NULL;
        newnode->next=NULL;
	if(pos==1)
	{
		insertfirst();
	}
	else
	{
        if(head==NULL)
        {
                head=newnode;
        }
	else
	{
		ptr=head;
		for(int i=0;i<pos-2;i++)
		{
			ptr=ptr->next;
		}
		newnode->next=ptr->next;
		ptr->next=newnode;
		newnode->prev=ptr;
	}
	}
}

void deletefirst()
{
	struct doubly *ptr;
	ptr=head;
	head=head->next;
	head->prev=NULL;
	free(ptr);
	printf("one element deleted from first\n");
}

void deletelast()
{
	struct doubly *ptr,*rtr;
	ptr=head;
	int count=0;
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
	printf("one element deleted from last");
}
void deleteanywhere()
{
	struct doubly *ptr,*rtr;
	int pos;
	ptr=head;
	printf("Enter location which you want to delete: ");
	scanf("%d",&pos);
	for(int i=0;i<pos-2;i++)
	{
		ptr=ptr->next;
	}
	rtr=ptr->next;
	ptr->next=ptr->next->next;
	ptr->next->next->prev=ptr;
	free(rtr);
	printf("Element deleted at %d position\n",pos);
}



void display()
{
	struct doubly *ptr;
	ptr=head;
	while(ptr->next!=NULL)
	{
		printf("%d ",ptr->data);
		ptr=ptr->next;
	}
	printf("%d",ptr->data);
}
