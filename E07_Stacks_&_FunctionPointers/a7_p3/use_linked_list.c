/*
CH-230-A
a7 p3.[c]
Shyam Yadav
s.yadav@jacobs-university.de
*/

#include<stdio.h>
#include "linked_list.h"

int main() {
    char input;
    int integer1, integer2;
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

            case 'q':
                freeandquit (mylist);
                break;

            default:
                break;
            }
    } while (input != 'q');
    return 0;
}