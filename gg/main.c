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

// �����Լ�

 int main(void)
{
    int num[5];
    int max, min, sum;


    printf("5���� ������ �Է��ϼ��� : ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &num[i]);
    }

    max = num[0];
    min = num[0];

    for (int i = 0; i < 5; i++)
    {
        if (num[i] > max)
        {
            max = num[i];
        }
        if (num[i] < min)
        {
            min = num[i];
        }
    }



    printf("�ִ� : %d\n", max);
    printf("�ּڰ� : %d\n", min);

    system("pause");
    return EXIT_SUCCESS;
}
