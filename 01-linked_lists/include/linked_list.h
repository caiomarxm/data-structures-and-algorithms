#ifndef LINKED_LIST
#define LINKED_LIST

typedef struct Node
{
    int value;
    struct Node *next;
} Node;

Node *generate_linked_list(int size);

void print_linked_list(Node *head);

Node* reverse_linked_list(Node *head);

void delete_linked_list(Node *head);

#endif