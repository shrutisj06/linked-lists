#include <stdio.h>
#include<stdlib.h>
struct node{
int data;
struct node*next;
};

void linkedlisttraversal(struct node*ptr)
{   while(ptr!= NULL)
    {printf("Element:%d\n",ptr->data);
    ptr=ptr->next;
}
}

struct node*insertatfirst(struct node*head,int data)
{
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
      ptr->data=data;
    ptr->next=head;

    return ptr;
};

int main()
{
    struct node*head=NULL;
    struct node*second;
    struct node*third;
    struct node*fourth;
    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));

//link first and second nodes
head->data=7;
head->next=second;

//link second and third node
second->data=11;
second->next=third;

//link third and fourth node
third->data=66;
third->next=fourth;

//terminate at fourth node
fourth->data=90;
fourth->next=NULL;
linkedlisttraversal(head);
head=insertatfirst(head,56);
linkedlisttraversal(head);

return 0;
}
