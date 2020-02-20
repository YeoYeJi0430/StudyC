#include "Stack.h"
#include <stdlib.h>
#include <stdio.h>

Stack *CreateStack()
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

Data PopStack(Stack* stack)
{
	if (IsEmptyStack(stack))
	{
		printf("Stack is Empty!");
		exit(1);
	}

	Data data = stack->head->data;

	Node* target = stack->head;
	stack->head = stack->head->next;
	ReleaseNode(target);

	stack->len--;

	return data;
}

Data PeekStack(const Stack* stack)
{
	return stack->head->data;
}

void PushStack(Stack* stack, Data data)
{
	Node* node = CreateNode(data);
	if (stack->len == 0)
	{
		stack->head = node;
	}
	else
	{
		node->next = stack->head;
		stack->head = node;
	}
	stack->len++;
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

void PrintStack(const Stack* stack)
{
	Node* current = stack->head;

	printf("STACK [");
	while (current != NULL)
	{
		printf("%d ", current->data);
		current = current->next;
	}
	printf("]\n");
}
