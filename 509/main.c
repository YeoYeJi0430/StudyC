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
struct marriage
{
    char name[20];
    int age;
    double height;
};

// �����Լ�
int main(void) 
{
    struct marriage m1 = { "Andy",22,185.5 };
    struct marriage* mp = &m1;

    printf("�̸� : %s\n", mp->name);
    printf("���� : %d\n", mp->age);
    printf("Ű : %.1lf\n", mp->height);

	system("pause");
	return EXIT_SUCCESS;
}