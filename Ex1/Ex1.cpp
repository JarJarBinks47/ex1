#include "Queue.h"
#include <iostream>
#include <sstream>
#include <windows.h> 


void initQueue(Queue* q, unsigned int size)
{
	q->elements = new int[size];
	q->maxSize = size;
	q->count = 0;
}
void cleanQueue(Queue* q)
{
	delete[] q->elements;
	q->elements = NULL;
}
void enqueue(Queue* q, unsigned int newValue)
{
	if (q->count < q->maxSize)
	{
		int insertIndex = q->count;
		q->elements[insertIndex] = newValue;
		q->count++;
	}
}
int dequeue(Queue* q) // return element in top of queue, or -1 if empty
{
	if (q->count == 0)
	{
		return -1;
	}

	int savedNum = q->elements[0];
	for (int j = 0; j < q->count - 1; j++)
	{
		q->elements[j] = q->elements[j + 1];
	}
	q->count--;
	return savedNum;
}

bool isEmpty(Queue* s)
{
	if (s->count == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
bool isFull(Queue* s)
{
	if (s->count == s->maxSize)
	{
		return true;
	}
	else
	{
		return false;
	}
}