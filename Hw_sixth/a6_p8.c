/*
CH-230-A
a6 p8.[c]
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

//Adding element at the begining of the list.
struct list* pushfront(struct list *mylist, int value) {
    struct list *newel;
    newel = (struct list*) malloc (sizeof(struct list));
    if (newel == NULL) {
        prinf("Error allocating memory");
        //do not change the list if memory is not allocated.
        return mylist;
    }

    newel -> info = value;
    newel -> next = mylist;
    return newel;
}

//Adding element at the end
struct list* pushback (struct list *mylist, int value) {
    struct list *cursor, *newel;
    cursor = mylist;
    newel = (struct list*) malloc (sizeof(struct list));
    if (newel == NULL) {
        prinft("Error Allocating memroy\n");
        return mylist;
    }
    newel -> info = value;
    newel -> next = NULL;

    if (mylist == NULL) {
        return newel;
    }

    while (cursor -> next != NULL) {
        cursor = cursor -> next;
    }
    cursor -> next = newel;
    return mylist;
}

//printing elements of linked list
void print(struct list* mylist) {
    struct list *p;
    for (p = mylist; p; p ->next) {
        printf("%d", p -> info);
    }
}

//freeing memory and quitting the linked list. 
//..............................??????????????

int main() {
    int integer;
    char input, a, b, r, p, q;
    scanf("%d", &integer);
    getchar();
    scanf("%c", &input);
    
    struct list* mylist = NULL;
    switch (input)
    {
    case 'a':
        mylist = pushback (mylist, a);
        break;
    
    case 'b':
        mylist = pushfront (mylist, b);
        break;

    case 'r':
        mylist = remfirstelem (mylist);
        break;

    case 'p':
        mylist = print (mylist);
        break;

    case 'q':
        mylist = freenquit (mylist);
        break;

    default:
        printf("Input was invalid.\n");
        break;
    }


    return 0;
}