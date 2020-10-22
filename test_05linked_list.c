#include <stdio.h>

typedef struct LinkNode
{
    int data;
    struct LinkNode *next;
} Node;

Node *reverse(Node *head)
{
    Node *p, *q, *r;
    p = head;
    q = p->next;

    while (q != NULL)
    {
        r = q->next;
        q->next = p;
        p = q;
        q = r;
    }
    head->next = NULL;
    head = p;
    return head;
}
