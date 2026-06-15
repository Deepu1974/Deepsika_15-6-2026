#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
	int data;
	struct Node* next;
	struct Node* prev;
}Node;

Node* createnode(int d)
{
	Node* newnode=(Node*)malloc(sizeof(Node));
	newnode->data=d;
	newnode->next=NULL;
	newnode->prev=NULL;
	return newnode;
}

Node* insertatbeginning(Node* head,int value)
{
	Node *n1=createnode(value);  
	if(head==NULL)
    {
    	head=n1;
	}
	n1->next=head;
	head=n1;
	n1->prev=NULL;
	return head;
}

Insertatbeginning
Create node to be inserted.
Keep head as the newnode next.
Newnode is kept as the head.
Newnode previous is set to null as it is the head.



 Node* insertatposition(Node *head,int value)
 {
 	Node *n3=createnode(value);
 	if(head==NULL)
    {
    	head=n3;
	}
	int key=1;
	if (key<1)
	{
		printf("Invalid");
	}
	if(key==1)
	{
		head=insertatbeginning(head,5);
		return head;
	}
	Node *temp=head;
for(int i=0;i<key-1&&temp!=NULL;i++)
{
	temp=temp->next;
}
	n3->next=temp->next;
	temp->next=n3;
	return head;
 }

Node* insertatending(Node* head,int value)
{
	Node *n2=createnode(value);  
	Node *temp=head;
	while(temp->next!=NULL)
	{
		temp=temp->next;
	}
    temp->next=n2;
	n2->prev=temp;
	return head;
}


int main()
{
	int n,d;
	scanf("%d",&n);
	Node* head=NULL;
	Node* temp=NULL;
	Node* newnode=NULL;
	for(int i=0;i<n;i++)
	{ scanf("%d",&d);
	 newnode=createnode(d);
	  if(head==NULL)
	  {
	  	head=newnode;
	  	temp=head;
		  }	
	   else
	   {
	   	temp->next=newnode;
	   	temp=newnode;
	   }
	}
	
	head=insertatbeginning(head,6);
	head=insertatending(head,6);
	head=insertatposition(head,1);
	temp=head;
	while(temp!=NULL)
	{
		printf("%d",temp->data);
		temp=temp->next;
	}
	return 0;
}
