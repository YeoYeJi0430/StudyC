/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�, ����ü �н�
  --------------------------------------------------------------------------------
  first created - 2020.02.10
  writer - YeoYeJi
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*union student
{
    int num;
    double grade;
};

// �����Լ�
int main(void) 
{
    union student s1 = { 315 };

    printf("�й� : %d\n", s1.num);
    s1.grade = 4.4;
    printf("���� : %.1lf\n", s1.grade);
    printf("�й� : %d\n", s1.num);

	system("pause");
	return EXIT_SUCCESS;
}*/

enum season {SPRING, SUMMER, FALL, WINTER};

int main(void)
{
    enum season ss;
    char* pc = NULL;

    ss = FALL;
    switch (ss)
    {
    case SPRING:
        pc = "inline"; break;
    case SUMMER:
        pc = "swimming"; break;
    case FALL:
        pc = "trip"; break;
    case WINTER:
        pc = "skiing"; break;
    default:
        pc = "error";
        break;
    }
    printf("���� ���� Ȱ�� => %s\n", pc);

    system("pause");
    return EXIT_SUCCESS;
}