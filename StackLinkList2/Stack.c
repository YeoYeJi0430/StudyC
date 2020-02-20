#include "Stack.h"
#include <stdlib.h>

Stack* CreateStack()
{
	Stack* stack = (Stack*)malloc(sizeof(Stack));
	if (stack == NULL)
	{
		exit(1);
	}
	stack->head = NULL;
	stack->len = 0;
	return stack;
}

bool IsEmptyStack(const Stack* stack)
{
	return stack->len == 0;
}

void ReleaseStack(Stack* stack)
{
	Node* current = stack->head;
	Node* prev = NULL;
	while (current != NULL)
	{
		prev = current;
		current = current->next;
		ReleaseNode(prev);
	}
	free(stack);
}