/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수, 연결리스트stack
  --------------------------------------------------------------------------------
  first created - 2020.02.19
  writer - YeoYeji
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/*typedef int element;

typedef struct stackNode
{
    element data;
    struct stackNode* link;
}stackNode;

stackNode* top;

bool isEmpty()
{
    return top == NULL ? true : false;
}

void push(element item)
{
    stackNode* temp = (stackNode*)malloc(sizeof(stackNode));
    temp->data = item;
    temp->link = top;
    top = temp;
}

element pop()
{
    element item;
    stackNode* temp = top;

    if (top == NULL)
    {
        printf("\n\n Stack is empty\n");
        return 0;
    }
    else
    {
        item = temp->data;
        top = temp->link;
        free(temp);
        return item;
    }
}

element peek()
{
    if (top == NULL)
    {
        printf("\n\n Stack is Empty ! \n");
        return 0;
    }
    else
    {
        return (top->data);
    }
}

void printStack()
{
    stackNode* p = top;
    printf("\n STACK [ ");
    while (p)
    {
        printf("%d ", p->data);
        p = p->link;
    }
    printf("] ");
}

// 메인함수
int main(void) 
{
    element item;
    top = NULL;
    printf("\n ** 연결 스택 연산 **\n");
    printStack();
    push(1);    printStack();
    push(2);    printStack();
    push(3);    printStack();

    item = peek();  printStack();
    printf("peek => %d", item);

    item = pop();   printStack();
    printf("\t pop => %d", item);
	
    item = pop();   printStack();
    printf("\t pop => %d", item);

    item = pop();   printStack();
    printf("\t pop => %d", item);

	system("pause");
	return EXIT_SUCCESS;
}*/


/*
typedef int Item;


typedef struct Node
{
    Item item;
    Node* next;
}Node;

typedef struct List
{
    Node* top;
    Node* head;
}List;

typedef struct Stack
{
    List* list;
}Stack;

void InitStack(Stack* Stack);
//bool IsEmpty(const Stack* stack);
void Push(Stack* stack, Item item);
Node* CreateNode(Item item);
void ReleaseNode(Node* node);

bool IsEmpty(const Stack* Stack)
{
    return Stack->head == NULL ? true : false;
}

Node* CreateNode(Item item)
{
    Node* node = (Node*)malloc(sizeof(Node));
    node->item = item;
    node->next = NULL;
    return node;
}

void ReleaseNode(Node* node)
{
    free(node);
}


int main(void)
{
    //here.
    system("pause");
    return EXIT_SUCCESS;
}
*/