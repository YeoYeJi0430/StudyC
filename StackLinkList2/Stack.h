#ifndef STACK_H
#define STACK_H
#include "Node.h"
#include <stdbool.h>

typedef struct Stack Stack;

struct Stack
{
	Node* head;
	int len;
};

Stack* CreateStack();
bool IsEmptyStack(const Stack *stack);
void ReleaseStack(Stack* stack);

#endif // !STACK_H

