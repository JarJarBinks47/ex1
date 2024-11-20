#include "Stack.h"
#include "Utils.h"
#include "LinkedList.h"
#include <windows.h> 
#include <iostream>'
#include <sstream>
#include <cstdlib>

void push(Stack* s, unsigned int element)
{
    s->elements = addToEnd(s->elements, initIntLinkedList(element));
    s->count++;
}
int pop(Stack* s)
{
    if (s->count == 0)
    {
        return -1;
    }
    LinkedList* current = s->elements;
    LinkedList* prev = s->elements;
    while (current->next != NULL)
    {
        prev = current;
        current = current->next;
    }
    int save = current->data;
    prev->next = NULL;
    s->count--;
    return save;
}
void initStack(Stack* s)
{
    s->elements = NULL;
    s->count = 0;
}
void cleanStack(Stack* s)
{
    freeList(s->elements);
    s->elements = NULL;
    s->count = 0;
}
bool isEmpty(Stack* s)
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
bool isFull(Stack* s)
{
    if (s->count > 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}