#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node*next;
};

void linkedlisttraversal(struct node*head)
{
   struct node*ptr=head;
   do
   {
       printf("element:%d\n",ptr->data);
       ptr=ptr->next;
   }
   while(ptr!=head);
}
int main()
{
    struct node*head;
    struct node*first;
    struct node*second;
    struct node*third;


    head=(struct node*)malloc(sizeof (struct node));
    first=(struct node*)malloc(sizeof (struct node));
    second=(struct node*)malloc(sizeof (struct node));
    third=(struct node*)malloc(sizeof (struct node));

    //link first and head node
    head->data=7;
    head->next=first;

    //link second and firstnode
    first->data=9;
    first->next=second;

    //link third and second node
    second->data=5;
    second->next=third;

    third->data=3;
    third->next=head;

    linkedlisttraversal(head);
    return 0;
}
