#include<stdio.h>
#include<stdlib.h>


struct node{
int data;
struct node*next;
};

void circularlltraversal(struct node*head)
{
    struct node*ptr=head;
    do{
        printf("element %d\n",ptr->data);
        ptr=ptr->next;
    }
    while(ptr!=head);
}

struct node*insertatfirst(struct node*head,int data)
{
    struct node*p=head->next;
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;

    while(p->next !=head)
    {
        p=p->next;
    }
    p->next=ptr;
    ptr->next=head;
    head=ptr;
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

    head->data=4;
    head->next=second;

    second->data=3;
    second->next=third;

    third->data=6;
    third->next=fourth;

    fourth->data=1;
    fourth->next=head;

    printf("before insertion:");
    circularlltraversal(head);
   head=insertatfirst(head,80);
    printf("after insertion:");

    circularlltraversal(head);

    return 0;

}
