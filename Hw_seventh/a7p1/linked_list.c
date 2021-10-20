/*
CH-230-A
a7 p1.[c]
Shyam Yadav
s.yadav@jacobs-university.de
*/
#include<stdlib.h>
#include<stdio.h>
#include "linked_list.h"

//Adding element at the begining of the list.
struct list * pushfront(struct list * mylist, int value) {
    struct list *newel;
    newel = (struct list *) malloc (sizeof(struct list));
    if (newel == NULL) {
        printf("Error allocating memory");
        //do not change the list if memory is not allocated.
        return mylist;
    }
    newel->info = value;
    newel->next= mylist;
    return newel;
}

//Adding element at the end
struct list* pushback (struct list *mylist, int value) {
    struct list *cursor, *newel;
    cursor = mylist;
    newel = (struct list *) malloc (sizeof(struct list));
    if (newel == NULL) {
        printf("Error Allocating memroy\n");
        return mylist;
    }
    newel -> info = value;
    newel -> next = NULL;

    if (mylist == NULL) {
        return newel;
    }

    while (cursor->next != NULL) {
        cursor = cursor -> next;
    }
    cursor -> next = newel;
    return mylist;
}

//printing elements of linked list
void print(struct list * mylist) {
    struct list *p;
    for (p = mylist; p != NULL; p = p->next) {
        printf("%d ", p -> info);
    }
    printf("\n");
}

//removing the first element from the list.
struct list *rem1stelem(struct list * mylist) {
    if (mylist == NULL) {
        return mylist;
    }
    mylist->info = 0;
    return mylist->next;
}

//freeing memory and quitting the linked list. 
void freeandquit(struct list *mylist) {
    struct list *nextelem;
    while (mylist != NULL) {
        nextelem = mylist->next;
        free (mylist);
        mylist = nextelem;
    }
    exit(1);  
}