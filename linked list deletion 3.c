#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node*next;};

void linkedlisttraversal(struct node*ptr)
{
    while (ptr!=NULL)
    {
        printf("Element: %d \n",ptr->data);
        ptr=ptr->next;
    }
}

void lastnodedeletion(struct node*head)
{
    struct node*p=head;
    struct node*q=p->next;
    while(q->next !=NULL)
   {

    p=p->next;
    q=q->next;

   }
p->next=NULL;
free(q);
return head;
}
int main()
{
    struct node*head;
    struct node*second;
    struct node*third;
    struct node*fourth;

    head=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));

    //link first and second node
    head->data=4;
    head->next=second;

     //link second and third node
     second->data=8;
    second->next=third;

     //link third and fourth node
     third->data=12;
    third->next=fourth;

    //link third and fourth node
    fourth->data=16;
    fourth->next=NULL;


    linkedlisttraversal(head);
    lastnodedeletion(head);
     linkedlisttraversal(head);

    return 0;






}
