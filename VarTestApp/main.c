/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�, ��������
  --------------------------------------------------------------------------------
  first created - 2020.02.05
  writer - YeoYeJi
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
void assign(void);

// �����Լ�
int main(void) 
{
    int a = 0;
	
    assign();
    printf("main �Լ� a : %d\n", a);

    system("pause");
	return EXIT_SUCCESS;
}

void assign(void)
{
    int a;

    a = 10;
    printf("assign �Լ� a : %d\n", a);
    return;
}*/

/*int main(void)
{
    int a = 10, b = 20;

    printf("��ȯ �� a�� b�� ��: %d, %d\n", a, b);
    {
        int temp;

        temp = a;
        a = b;
        b = temp;
        // printf("temp�� �� : %d\n", temp);
    } // ��Ͼȿ��� temp���� -> ��ϳ����� temp�����
    printf("��ȯ �� a�� b�� �� : %d, %d\n", a, b);
    // printf("temp�� �� : ", temp);

    system("pause");
    return EXIT_SUCCESS;
}*/

void assign10(void);
void assign20(void);

int a;

int main(void)
{
    printf("�Լ� ȣ�� �� a �� : %d\n", a);

    assign10();
    assign20();

    printf("�Լ� ȣ�� �� a �� : %d\n", a);

    system("pause");
    return EXIT_SUCCESS;
}
void assign10(void)
{
    a = 10;
}
void assign20(void)
{
    int a; //  static int a;
    a = 20;
}