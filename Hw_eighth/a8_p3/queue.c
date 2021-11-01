/**
 * @file queue.c
 */

#include <stdio.h>
#include <stdlib.h>

#include "queue.h"

void initialize_queue(Queue *pq)
{
	pq->front = pq->rear = NULL;
	pq->items = 0;
}

int queue_is_full(const Queue *pq)
{
	return pq->items == MAXQUEUE;
}

int queue_is_empty(const Queue *pq)
{
	return pq->items == 0;
}

int queue_item_count(const Queue *pq)
{
	return pq->items;
}

int enqueue(Item item, Queue *pq)
{
	// add missing stuff
        Node *newelem;
        newelem = (Node*) malloc (sizeof(Node));
        if (newelem == NULL) {
            printf("Error allocating memoey.");
            exit(1);
        }
        newelem -> item = item;
        newelem -> next = NULL;
        if (queue_is_empty(pq)) {
            //since queue is empty, front and rear is the same element.
            pq -> rear = pq -> front = newelem;
        }
        else {
            //pointing or linking rear to new node. 
            pq -> rear -> next = newelem;
            //chaging the rear par.
            pq ->rear = newelem;
        }
        //to keep track of the number of items in the queue. 
        pq -> items = pq -> items + 1;
        return 0;
}

int printq(Queue pq) {
    Node *ptr;
    ptr = pq.front;
    printf("content of the queue: ");
    for (int i = 0; i < pq.items; i++) {
        printf("%d ", ptr -> item); 
        ptr = ptr -> next;
    }
    printf("\n");
    return 0;
}

int dequeue(Item *pitem, Queue *pq)
{
    Node *ptr;
	// add missing stuff
    if (queue_is_empty(pq)) {
        printf("No element in the queue.\n");
        return -1;
    }
    else {
        //copying items to be removed for printing removed items on screen.
        *pitem = pq -> front -> item;
        //storing the front address for dequeuing later.
        ptr = pq -> front;
        //reseting front item to the next item in the queue. 
        pq -> front = pq -> front -> next;
        free(ptr);
        pq -> items = pq -> items - 1;
        return 0;
    }

}

void empty_queue(Queue *pq)
{   //storing the removed item. 
	Item dummy;
	while (!queue_is_empty(pq)) {
		dequeue(&dummy, pq);
	}
}