#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node*next;
};

void linkedlisttraversal(struct node*head)
{
    struct node*ptr=head;
    do{
    printf("element: %d \n",ptr->data);
    ptr=ptr->next;
}
while(ptr !=head);
}

struct node*insertatend(struct node*head,int data)
{
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    struct node*p=head->next;
    ptr->data=data;
    while(p->next !=head)
    {
        p=p->next;
    }
    p->next=ptr;
    ptr->next=head;
    return head;

    };
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

    printf("before insertion");
    linkedlisttraversal(head);
    head=insertatend(head,52);
    printf("after insertion");
    linkedlisttraversal(head);

    return 0;
}
