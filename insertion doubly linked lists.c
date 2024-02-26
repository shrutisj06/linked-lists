#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node*next;
struct node*prev;
};

void linkedlisttraversal(struct node*head)
{
    struct node*ptr=head;
    while( ptr != NULL)
    {
        printf("element: %d\n",ptr->data);
        ptr=ptr->next;
    }
}

struct node*insertatfirst(struct node*head,int data)
{ struct node*ptr=(struct node*)malloc(sizeof(struct node));
  struct node*p=head;
  ptr->data=data;
  ptr->next=head;
  ptr->prev=NULL;
  head->prev=ptr;
  return ptr;



};
int main()
{
struct node*head;
struct node*fourth;
struct node*second;
struct node*third;

head=(struct node*)malloc(sizeof (struct node));
fourth=(struct node*)malloc(sizeof (struct node));
second=(struct node*)malloc(sizeof (struct node));
third=(struct node*)malloc(sizeof (struct node));

    head->prev=NULL;
    head->data=5;
    head->next=second;

    second->prev=head;
    second->data=6;
    second->next=third;

    third->prev=second;
    third->data=8;
    third->next=fourth;


    fourth->prev=third;
    fourth->data=2;
    fourth->next=NULL;

    printf("before insertion:\n");
    linkedlisttraversal(head);
    printf("after insertion:\n");
   head= insertatfirst(head,50);
   linkedlisttraversal(head);
    return 0;
}
