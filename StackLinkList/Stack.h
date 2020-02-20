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

Stack *CreateStack();
Data PopStack(Stack* stack);
Data PeekStack(const Stack* stack);
void PushStack(Stack* stack, Data data);
bool IsEmptyStack(const Stack* stack);
void ReleaseStack(Stack* stack);
void PrintStack(const Stack* stack);
#endif // !STACK_H

