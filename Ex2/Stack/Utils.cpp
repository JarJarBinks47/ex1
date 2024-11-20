#include "Stack.h"
#include "Utils.h"
#include <windows.h> 
#include <iostream>'
#include <sstream>
#include <cstdlib>

void reverse(int* nums, unsigned int size)
{
	Stack* stack = new Stack();
	for (int i = 0; i < size; i++)
	{
		push(stack, nums[i]);
	}
	for (int j = 0; j < size; j++)
	{
		nums[j] = pop(stack);
	}
}
int* reverse10()
{
	int* arr = new int[10];
	for (int i = 0; i < 10; i++)
	{
		std::cout << "Enter number: ";
		std::cin >> arr[i];
	}
	Stack* stack = new Stack();
	for (int i = 0; i < 10; i++)
	{
		push(stack, arr[i]);
	}
	for (int j = 0; j < 10; j++)
	{
		arr[j] = pop(stack);
	}
	return arr;
}