#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *next;
};
struct node* insert(int);
void print(struct node *);

void main()
{
	int n;
	struct node *ptr1=NULL;
	printf("Enter no of elements to be inserted in linked list: ");
	scanf("%d",&n);
	ptr1=insert(n);
	print(ptr1);

}
struct node* insert(int n)
{
	int i=0;
	struct node*head=NULL;
	struct node *temp=NULL;
	struct node *ptr=NULL;
	
	for(i=0;i<n;i++)
	{
		temp=(struct node *)malloc(sizeof(struct node));
		printf("\nEnter Data: ");
		scanf("%d",&(temp->data));
		temp->next=NULL;
		if(head == NULL)
		{
			head=temp;
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
	return head;
	
}

void print(struct node* head)
{
	struct node *ptr=head;
	while(ptr!=NULL)
	{
		printf("%d-> ",ptr->data);
		ptr=ptr->next;
	}
}


