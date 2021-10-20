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

//function for adding element to the empty list. 
struct node* addtoempty (struct node* head, int data) {
    struct node* temp;
    temp = (struct node*) malloc (sizeof(struct node));
    if (temp == NULL) {
        printf("Error allocating memory.\n");
    }
    //real make of doubly linked list. 
    temp -> prev = NULL;
    temp -> data = data;
    temp -> next = NULL;

    head = temp; //changing head as doubly linked list.
    return head; 
} 

//function for adding elements at the beginning of the list. 
struct node* addatbeg(struct node* head, int value) {
    struct node* temp;
    temp = (struct node*) malloc (sizeof(struct node));
    if (temp == NULL) {
        printf("Error in allocating memory");
    }
    
    temp -> prev = NULL;
    temp -> data = value;
    temp -> next = NULL; //redundant
    temp -> next = head;

    head -> prev = temp;
    head = temp; //updating the head pointer since temp is the first node. 
    return head;
}

//function for adding elements at the end of the list. 
struct node* addatend(struct node* head, int data) {
    struct node* temp;
    struct node* tp;
    temp = (struct node*) malloc (sizeof(struct node));
    if (temp == NULL) {
        printf("Error in allocating memory");
    }
    
    temp -> prev = NULL;
    temp -> data = data;
    temp -> next = NULL;

    tp = head; //copying head to tp

    //Here we traverse throught the list. this is where 
    //we check the null position, and create a link.
    while (tp -> next != NULL) {
        tp = tp -> next; //linking
    }

    //THIS IS WHERE THE DOUBLY LINKED LIST IS MADE. 
    tp -> next = temp; //linking temp to head with the help of tp.
    temp -> prev = tp; //linking head to temp in reverse way.
    
    return head;
}

//function for adding the nodes and elements into the list. 
struct node* create_list (struct node* head) {
    int n, data;
    printf("Enter the number of nodes needed: \n");
    scanf("%d", &n);
    if (n == 0) {
        return head; 
    }
    //Adding elements to the head. 
    printf("Please enter the number to be added: ");
    scanf("%d", &data);
    //calling a function to add data to the empty list and 
    ///copying them to head. 
    head = addtoempty(head, data);

    //adding other data at the end of the head.
    for (int i = 1; i < n; i++) {
        printf("Enter the elements for the node %d: ", i + 1);
        scanf("%d", &data);
        head = addatbeg(head, data);
    }
    return head;
}


int main() {
    //initializing the head to NULL.
    struct node* head = NULL;
    struct node* ptr; //declaring pointer for the later use. 
    //calling a function to create list and copying to null head. 
    head = create_list (head);

    ptr = head; //pointing to the first elem of head-list.
    printf("Printing all the elements of the list:\n");
    while (ptr != NULL) {
        printf("%d ", ptr -> data);
        //linking to the next element. 
        ptr = ptr -> next;
    }
    printf("\n");

    free(head);

    return 0;
}