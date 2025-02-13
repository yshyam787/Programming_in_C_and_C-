/*
CH-230-A
a7 p3.[c]
Shyam Yadav
s.yadav@jacobs-university.de
*/
//creating list.
struct list {
    int info;
    //self reference
    struct list *next;
};
//Adding element at the begining of the list.
struct list * pushfront(struct list * mylist, int value);
//Adding element at the end
struct list* pushback (struct list *mylist, int value);

//printing elements of linked list
void print(struct list * mylist);

//removing the first element from the list.
struct list *rem1stelem(struct list * mylist);

//freeing memory and quitting the linked list. 
void freeandquit(struct list *mylist);