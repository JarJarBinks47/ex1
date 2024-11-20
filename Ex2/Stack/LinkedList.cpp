#include "Stack.h"
#include "Utils.h"
#include <windows.h> 
#include <iostream>'
#include <sstream>
#include <cstdlib>

void freeList(LinkedList* head)
{
        LinkedList* temp;
        while (head != NULL)
        {
            temp = head;
            head = head->next;
            free(temp);
        }
        head = NULL;
}
LinkedList* addToEnd(LinkedList* head, LinkedList* num) {
    if (head == NULL)
    {
        return num;
    }
    LinkedList* current = head;
    while (current->next != NULL)
    {
        current = current->next;
    }
    current->next = num; 
    return head;
}
LinkedList* initIntLinkedList(unsigned int value)
{
    LinkedList* num = new LinkedList(); 

    num->data = value;
    num->next = NULL;
    return num; 
}