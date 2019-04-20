// CX1007 Data Structures
// Week 9 Lab Tutorial - DynamicData-Linked Lists

#include "stdlib.h"
#include "stdio.h"

////////////////////////////////////////////////////////////

typedef struct _listnode
{
    int item;
    struct _listnode *next;
} ListNode;

int main()
{
    ListNode *head, *p, *temp;
    int n;

    head=NULL;
    p=NULL;		// pointing to the last node in the list
    printf("Enter a list of numbers, terminated by a non-digit character:\n");
    while (scanf("%d",&n))
    {
        temp=malloc(sizeof(ListNode));
        temp->item=n;
        temp->next=NULL;
        if (head==NULL)
        {
            head=temp;
            p=temp;

        }
        else
        {
            p->next=temp;
            p=p->next;
        }
    }
    printf("Current list:");
    p=head;
    while (p)
    {
        printf("%d ",p->item);
        p=p->next;
    }
}
