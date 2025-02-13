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
            //pointing/linking rear to new node. 
            pq -> rear -> next = newelem;
            //chaging the rear par.
            pq ->rear = newelem;
        }
        //to keep track of the number of items in the queue. 
        pq -> items = pq -> items + 1;
        return 0;
}

int dequeue(Item *pitem, Queue *pq)
{
	// add missing stuff
        return 0;
}

void empty_queue(Queue *pq)
{   //storing the removed item. 
	Item dummy;
	while (!queue_is_empty(pq)) {
		dequeue(&dummy, pq);
	}
}