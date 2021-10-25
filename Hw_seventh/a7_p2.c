/*
CH-230-A
a7 p2.[c]
Shyam Yadav
s.yadav@jacobs-university.de
*/


#include<stdio.h>
#include<stdlib.h>

//making a node for the doubly linked list. 
struct node {
    struct node* prev;
    int data;
    struct node* next;
};

//function for removing the given character from the list.
struct node* remove_elem (struct node* list, char ch) {
    struct node* before = NULL;
    struct node* after = NULL;
    struct node *current = list;
    int bool = 0;
    while (current != NULL) {
        if (current ->data == ch) {
            bool = 1;
            //checking at the front of the doubly linked list. 
            if (current -> prev == NULL) {
                current = current ->next;
                current -> prev = NULL;
                list = current;
            }

            //checking at the end of the list.
            else if (current -> next == NULL) {
                current = current -> prev;
                current -> next = NULL;
            }
            //checking in the middle of the list. 
            else {
                before = current -> prev; //storing link of previous elem.
                after = current -> next; //storing link of next elem.
                current = after; //linking the current list to next elem.
                /*actual removing occurs here. current element linked to 
                next element directly connects to the previous elements
                leving behind current element. */
                current -> prev = before; 
                current = before;/*original previous elem. changes to current 
                elem.*/
                current -> next = after; //linking current elem. to next elem
                //leaving the origingal current element.
            }
        }
        current = current -> next;
    }
    if (bool == 0) {
    printf("The element is not in the list.\n");
    }
    return list;
}

//function for adding elements at the beginning of the list. 
struct node* addatbeg(struct node* head, int value) {
    struct node* temp;
    temp = (struct node*) malloc (sizeof(struct node));
    if (temp == NULL) {
        printf("Error in allocating memory\n");
        return head;
    }
    
    temp -> prev = NULL;
    temp -> data = value;
    temp -> next = NULL; //redundant
    temp -> next = head;

    if (head == NULL) {
        return temp;
    }
    else {
        head -> prev = temp; 
        return temp;
    }
}

//function for printing the list.
void print(struct node* head) {
    struct node* ptr;
    if (head == NULL) {
        printf("No element in the list.\n");
    }
    for (ptr = head; ptr != NULL; ptr = ptr -> next) {
        printf("%c ", ptr -> data);
    }
    printf("\n");
}

//function for printing the list backwards. 
void reverseprint(struct node* head) {
    struct node* before;
    struct node* current;
    current = head;
    if (head == NULL) {
        printf("No elements in the list.\n");
    }
    //getting the last element of the list. 
    while (current -> next != NULL) {
        current = current -> next;
    }
    //actual reversing. 
    for (before = current; before != NULL; before = before -> prev) {
        printf("%c ", before -> data);
    }
    printf("\n");
} 

//function for emptying the list, freeing memory, and quitting execution. 
void em_free_quit(struct node* list) {
    struct node* ptr;
    if (list == NULL) {
        printf("The element is not in the list!\n");
        exit(1);
    }
    while (list != NULL) {
        //liking pointer to the next element of list. 
        ptr = list -> next;
        free (list);
        //moving a step forward. 
        list = ptr;
    }
    exit(1);
}


int main() {
    int action;
    char ch;
    //initializing the head to NULL.
    struct node* head = NULL;
    
    do {
        scanf("%d", &action);
        switch (action)
        {
        case 1:
            getchar();
            scanf("%c", &ch);
            head = addatbeg(head, ch);
            break;

        case 2:
            getchar();
            scanf("%c", &ch);
            head = remove_elem(head, ch);
            break;

        case 3:
            print(head);
            break;

        case 4:
            reverseprint(head);
            break;

        case 5:
            em_free_quit(head);
            break;
            
        default:
            break;
        }
    } while (action != 5);

    return 0;
}