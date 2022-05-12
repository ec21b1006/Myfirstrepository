/*Linked list*/

#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
};
void linkedlistprint(struct Node *ptr)
{
    while (ptr != NULL)
    {
        printf("Element: %d\n", ptr->data);
        ptr = ptr->next;
    }
}
struct Node *sky = NULL;
struct Node *head = NULL;
void insertbeginning(void)
{
    
    sky = (struct Node*)malloc(sizeof(struct Node));
    sky->data = 0;
    sky->next = head;
    printf("New node is added\n");
}
int main()
{
    
    struct Node *second = NULL;
    struct Node *third = NULL;

    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));

    head->data = 1;
    head->next = second;
    second->data = 2;
    second->next = third;
    third->data = 3;
    third->next = NULL;
    linkedlistprint(head);
    insertbeginning();
    linkedlistprint(sky);
    return 0;
}