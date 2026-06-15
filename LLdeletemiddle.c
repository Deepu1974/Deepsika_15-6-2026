#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
	int data;
	struct Node* next;
}Node;

Node* createnode(int d)
{
	Node* newnode=(Node*)malloc(sizeof(Node));
	newnode->data=d;
	newnode->next=NULL;
	return newnode;
}

 Node* deletemiddle( Node* head) {
   if(head==NULL ||head->next==NULL)
         return NULL;
     Node* fast=head;
     Node* slow=head;
     Node* prev=head;
    while(fast!=NULL && fast->next!=NULL)
    {   fast=fast->next->next;
        prev=slow;
        slow=slow->next;
    }
    prev->next=slow->next;
    free(slow);
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
{
	scanf("%d",&d);
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
head=deletemiddle(head);
temp=head;

while(temp!=NULL)
{
	printf("%d",temp->data);
	temp=temp->next;
}
return 0;
}
