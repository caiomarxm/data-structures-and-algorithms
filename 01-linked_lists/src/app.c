#include <stdlib.h>
#include <stdio.h>
#include "linked_list.h"

int main(int argc, char *argv[])
{
    if (argc != 2) {
        printf("You must specify the list size in order to run the app\n");
        return 0;
    }

    int size = atoi(argv[1]);
    Node *linked_list = generate_linked_list(size);

    // TODO: implement prints
    print_linked_list(linked_list);

    linked_list = reverse_linked_list(linked_list);
    printf("\n");

    print_linked_list(linked_list);

    delete_linked_list(linked_list);

    return 1;
}
