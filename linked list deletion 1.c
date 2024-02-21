#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node*next;
};
void linkedlisttraversal(struct node *ptr) {
    while (ptr != NULL) {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}
//deleting the first node
struct node*deletefirstnode(struct node*head)
{
struct node*ptr=head;
head=head->next;
free(ptr);
return (head);

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
    head->data = 4;
    head->next = second;

    // link second and third node
    second->data = 3;
    second->next = third;

    // link third and fourth node
    third->data = 8;
    third->next = fourth;

    // terminate at fourth node
    fourth->data = 1;
    fourth->next = NULL;
printf("linked list before deletion");
    linkedlisttraversal(head);
    head=deletefirstnode(head);
    printf("linked list after deletion");
      linkedlisttraversal(head);

    return 0;}

