/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ� // ����
  --------------------------------------------------------------------------------
  first created - 2020.02.04
  writer - YeoYeJi
*/

#include <stdio.h>
#include <stdlib.h>

// �����Լ�
int main(void) 
{
    /*char small, cap = 'H';

    if ((cap >= 'A') && (cap <= 'Z'))
    {
        small = cap + ('a' - 'A');
    }

    printf("�빮�� : %c %c", cap, '\n');
    printf("�ҹ��� : %c", small);*/

    /*char ch1, ch2;

    scanf("%c%c", &ch1, &ch2); // "%c %c"
    printf("[%c%c]", ch1, ch2);*/

    /*int ch;

    ch = getchar();
    printf("�Է��� ���� : ");

    putchar(ch);
    putchar('\n'); //printf("\n");*/

    /*char ch;

    for (int i = 0; i < 3; i++)
    {
        scanf("%c", &ch);
        printf("%c", ch);
    }
    putchar('\n');*/

    /*int res;
    char ch;

    while (1)
    {
        res = scanf("%c", &ch);
        if (res == -1)
        {
            break;
        }
        printf("%d ", ch);
    }*/

    int num, grade;

    printf("�й� �Է� : ");
    scanf("%d", &num);
    getchar();//������?
    printf("���� �Է� : ");
    grade = getchar();
    printf("�й� : %d, ���� : %c\n", num, grade);


	system("pause");
	return EXIT_SUCCESS;
}