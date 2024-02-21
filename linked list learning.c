#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

void linkedlisttraversal(struct node *ptr) {
    while (ptr != NULL) {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}

//struct node *insertatfirst(struct node *head, int data) {
    //struct node *ptr = (struct node *)malloc(sizeof(struct node));
    //ptr->data = data;
    //ptr->next = head;
    //return ptr;
//

//struct node*insertatindex(struct node**head,int data,int index)
//{
 //   struct node*ptr=(struct node*)malloc(sizeof(struct node));
    //struct node*p=head;
    //int i=0;
  //  while(i!=index-1)
    //{
      //  p=p->next;
        //i++;
    //}
    //ptr->data=data;
    //ptr->next=p->next;
    //p->next=ptr;
    //return head;
//;
//struct node*insertatend(struct node*head,int data)
//{
    //struct node*ptr=(struct node*)malloc(sizeof(struct node));
    //ptr->data=data;
    //struct node*p=head;
    //while(p->next!=NULL)
    //{p=p->next;
        //}
        //p->next=ptr;
        //ptr->next=NULL;
       // return head;
//};

struct node*insertafternode(struct node*prevnode,struct node*head,int data)
{
    struct node*ptr=(struct node*)malloc(sizeof(struct node));
    ptr->data=data;
    ptr->next=prevnode->next;
    prevnode->next=ptr;

    return head;
};
int main() {
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    // link first and second nodes
    head->data = 7;
    head->next = second;

    // link second and third node
    second->data = 11;
    second->next = third;

    // link third and fourth node
    third->data = 66;
    third->next = fourth;

    // terminate at fourth node
    fourth->data = 90;
    fourth->next = NULL;

    linkedlisttraversal(head);

    // Insert a new node at the beginning
   // head = insertatfirst(head, 56);

   //head= insertatend(head,56);
    // Traverse the linked list after insertion
    head=insertafternode(head,third,45);
    linkedlisttraversal(head);

    return 0;
}

