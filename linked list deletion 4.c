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

//for deleting an element with given alue
struct node*deleteatindex(struct node*head,int value)
{
    struct node*p=head;
    struct node*q=head->next;
   while (q != NULL) {
        if (q->data == value) {
            // If the value is found, remove the node
            p->next = q->next;
            free(q);
            return head;  // Return the updated head
        }
        // Move to the next pair of nodes
        p = p->next;
        q = q->next;
    }

    // If the value is not found, no change in the list
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

//printf("linked list before deletion");
//linkedlisttraversal(head);
head=deleteatindex(head,7);
linkedlisttraversal(head);

return 0;
}
