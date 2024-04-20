#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

#include "linked_list.h"

Node *generate_linked_list(int size)
{
    assert(size >= 0);
    Node *head = malloc(sizeof(Node));
    head->next = NULL;

    Node *current = head;

    for (int i = 0; i < size; i++)
    {
        current->value = rand() % 101;
        current->next = malloc(sizeof(Node));
        current = current->next;
    }

    return head;
}

void print_linked_list(Node *head)
{
    Node *current = head;

    int counter = 0;
    while (current != NULL)
    {
        printf("%d ", current->value);
        current = current->next;

        counter++;
    }
};

Node* reverse_linked_list(Node *head)
{
    Node *prev=NULL, *current=head, *next=NULL;

    while (current != NULL)
    {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }

    return prev;
};

void delete_linked_list(Node *head)
{
    Node *current = head;
    Node *prev = NULL;

    while (current->next != NULL)
    {
        prev = current;
        current = current->next;
        free(prev);
    }

    free(current);
}
