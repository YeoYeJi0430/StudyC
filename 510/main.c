/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�
  --------------------------------------------------------------------------------
  first created - 2020.02.01
  writer - Hugo MG Sung.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct train Train;

struct train
{
    int seats;
    Train* next;
};

// �����Լ�
int main(void) 
{
    Train* head = NULL;
    Train* tail = NULL;

    for (int i = 0; i < 5; i++)
    {
        if (head==NULL)
        {
            head = tail = (Train*)malloc(sizeof(Train));
        }
        else
        {
            tail->next = (Train*)malloc(sizeof(Train));
            tail = tail->next;
        }
    }
	system("pause");
	return EXIT_SUCCESS;
}