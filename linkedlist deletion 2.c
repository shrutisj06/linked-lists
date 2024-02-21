#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node*next;};

void linkedlisttraversal(struct node*ptr)
{
    while(ptr!=NULL)
    {
        printf("element: %d\n",ptr->data);
        ptr=ptr->next;

    }
}

//for deleting at index
struct node*deleteatindex(struct node*head,int index)
{
    struct node*p=head;
    struct node*q=p->next;
    for(int i=0;i<index-1;i++)
    {
        p=p->next;
        q=q->next;
        p->next=q->next;
        free(q);
    }
    return head;
};

int main()
{struct node*head;
struct node*fourth;
struct node*second;
struct node*third;

head=(struct node*)malloc(sizeof(struct node));
fourth=(struct node*)malloc(sizeof(struct node));
second=(struct node*)malloc(sizeof(struct node));
third=(struct node*)malloc(sizeof(struct node));


head->data=4;
head->next=second;

second->data=6;
second->next=third;

third->data=7;
third->next=fourth;

fourth->data=3;
fourth->next=NULL;

printf("linked list before deletion");
linkedlisttraversal(head);
head=deleteatindex(head,2);
linkedlisttraversal(head);

return 0;
}

