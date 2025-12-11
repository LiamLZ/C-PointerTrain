#include <stdlib.h>
#include <assert.h>
#include <stdio.h>


typedef struct NODE{
    int data;
    struct NODE *linke;
    
} Node;

Node * newnode(int value)
{
    Node *new;
    new=(Node *)malloc(sizeof(Node));
    assert(new!=NULL);
    new->data=value;
    return new;
}

int main(int argc, char const *argv[])
{
    /* code */

    Node *head;
    head=newnode(5);
    head->linke=newnode(10);
    head->linke->linke=newnode(15);
    head->linke->linke->linke=NULL;

    return 0;
}
