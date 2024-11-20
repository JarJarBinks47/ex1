#ifndef LINKEDLIST_H
#define LINKEDLIST_H
typedef struct LinkedList{
	unsigned int data;
	struct LinkedList* next;
}LinkedList;

void freeList(LinkedList* head);
LinkedList* addToEnd(LinkedList* head, LinkedList*);
LinkedList* initIntLinkedList(unsigned int value);
void removeFromEnd(LinkedList* head);
#endif 