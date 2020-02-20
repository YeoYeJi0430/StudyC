/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�, ���Ḯ��Ʈ �̿� ����
  --------------------------------------------------------------------------------
  first created - 2020.02.20
  writer - Yeo Ye ji
*/

#include <stdio.h>
#include <stdlib.h>
#include "Stack.h"

// �����Լ�
int main(void) 
{
    Stack* stack = CreateStack();
    PrintStack(stack);

    printf("PUSH 1\t"); PushStack(stack, 1);    PrintStack(stack);
    printf("PUSH 2\t"); PushStack(stack, 2);    PrintStack(stack);
    printf("PUSH 3\t"); PushStack(stack, 3);    PrintStack(stack);

    Data data = PeekStack(stack);
    printf("PEEK %d\t", data);  PrintStack(stack);

    data = PopStack(stack);
    printf("POP %d\t", data);   PrintStack(stack);

    data = PopStack(stack);
    printf("POP %d\t", data);   PrintStack(stack);

    data = PopStack(stack);
    printf("POP %d\t", data);  PrintStack(stack);

    ReleaseStack(stack);

	system("pause");
	return EXIT_SUCCESS;
}