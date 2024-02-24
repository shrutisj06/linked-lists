#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node*next;};

void linkedlisttraversal(struct node*head)
{
    struct node*ptr=head;
    do{
        printf("element %d \n",ptr->data);
        ptr=ptr->next;
    }
    while(ptr !=head);
}

struct node*insertatindex(struct node*head,int data,int index)
{
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
     if (index == 0) {
        struct node* temp = head;
        while (temp->next != head) {
            temp = temp->next;
        }

        ptr->next = head;
        temp->next = ptr;
        head = ptr;
        }
        else{
    struct node*p=head;
    int i=0;
    while(i!=index-1)
    {
        p=p->next;
         i++;
    }
    ptr->next=p->next;
    p->next=ptr;

        }

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

    head->data=2;
    head->next=second;

    second->data=5;
    second->next=third;

    third->data=3;
    third->next=fourth;

    fourth->data=9;
    fourth->next=head;


    linkedlisttraversal(head);
    head=insertatindex(head,52,2);
    linkedlisttraversal(head);

    return 0;
}
