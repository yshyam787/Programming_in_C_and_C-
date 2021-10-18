/*
CH-230-A
a6 p9.[c]
Shyam Yadav
s.yadav@jacobs-university.de
*/

#include<stdio.h>
#include<stdlib.h>
//creating list.
struct list {
    int info;
    //self reference
    struct list *next;
};

//Entering the element at the given position in the list.
struct list *insertelem(struct list *mylist, int number, int position) {
    //declaring a pointer for traversing.
    struct list *ptr;
    ptr = mylist;
    int count;
    while (ptr != NULL && count < position) {
        ptr = ptr -> next;
        count = count + 1;
    }
    if (position < 0 || position > count) {
        printf("Invalid postion.\n");
        return mylist;
    }
    else {
        //new pointer for new element.
        struct list *ptr2;
        ptr2 = (struct list *) malloc (sizeof(struct list));
        if (ptr2 == NULL) {
            printf("Error in allocating memory.\n");
            return mylist;
        }
        ptr = mylist;
        //decrementing the value of position by 1. 
        
        //traversing through list.
        for (int i = 0; i < (position - 1); i ++) {
            ptr = ptr -> next;
        }
        ptr2 -> info  = number;
        ptr2 -> next = ptr -> next;
        ptr->next = ptr2;
        return mylist;
    }  
}

//reversing the elements of the list.
struct list *reverse (struct list *mylist) {
    //initializing pointer varialbe to zero.
    struct list *prev = NULL;
    //assigning the first element of list to a cursor pointer.
    struct list *cursor = mylist;
    //initializing ahead pointer variable to zero.
    struct list *ahead = NULL;
    while (cursor != NULL) {
        //Storing next.
        ahead = cursor -> next;
        //reversing pointer of first elemnent of mylist to NULL.
        cursor ->next = prev;
        //moving pointers one position ahead.
        prev = cursor;
        cursor = ahead;
    }
    //returning the elements in a recursive way.
    return prev;
}
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

int main() {
    char input;
    int integer1, integer2, number, position;
    //initializing the list to the NULL.
    struct list* mylist = NULL;
    do {
        scanf ("%c", &input);
        switch (input) {
            case 'a':
                scanf("%d", &integer1);
                mylist = pushback (mylist, integer1);
                break;
            
            case 'b':
                scanf("%d", &integer2);
                mylist = pushfront (mylist, integer2);
                break;

            case 'r':
                mylist = rem1stelem (mylist);
                break;

            case 'p':
                print (mylist);
                break;

            case 'i':
                scanf("%d", &number);
                scanf("%d", &position);
                mylist = insertelem (mylist, number, position);
                break;

            case 'R':
                mylist = reverse (mylist);
                break;

            case 'q':
                freeandquit (mylist);
                break;

            default:
                break;
            }
    } while (input != 'q');
    return 0;
}