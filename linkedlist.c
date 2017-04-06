#include <stdio.h>
#include <stdlib.h>

typedef struct node node;

struct linkedlist {
    node *firstitem;
} typedef linkedlist;

struct node {
    int number;
    node *next;
};

void print_list(linkedlist *list) {
    node *listitem = list->firstitem;

    do {
        printf("%d ", listitem->number);
    } while ((listitem = listitem->next) != NULL);
}

node *get_next_node(int number) {
    node *listitem = malloc(sizeof(node));

    listitem->number = number;
    listitem->next = 0;

    return listitem;
}

void add_to_list(int number, linkedlist *list) {
    printf("adding %d\n", number);

    if (list->firstitem == 0) {
        printf("inserting as first %d\n", number);
        list->firstitem = get_next_node(number);
        return;
    }

    node *prevlistitem = 0;
    node *listitem = list->firstitem;

    do {
        // insert before
        if (number < listitem->number) {
            printf("inserting %d before %d\n", number, listitem->number);
            node *newlistitem = get_next_node(number);
            if (prevlistitem == 0) {
                list->firstitem = newlistitem;
            } else {
                prevlistitem->next = newlistitem;
            }
            newlistitem->next = listitem;
            break;
        } else if (number > listitem->number) { // insert after
            printf("%d is bigger than %d\n", number, listitem->number);

            if (listitem->next == 0) {
                listitem->next = get_next_node(number);
                break;
            }
        }
        prevlistitem = listitem;
    } while ((listitem = listitem->next) != NULL);
}

int main() {
    int numbers[] = {10,30,2,19,5,50,20,1};

    linkedlist list;
    list.firstitem = 0;
    size_t numofnumbers = sizeof(numbers) / sizeof(int);

    for (int i=0; i < numofnumbers; i++) {
        add_to_list(numbers[i], &list);
    }

    print_list(&list);
    puts("\n");

    return 0;
}