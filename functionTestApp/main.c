/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ� // �Լ�
  --------------------------------------------------------------------------------
  first created - 2020.02.03
  writer - YeoYeJi
*/

#include <stdio.h>
#include <stdlib.h>

/*int sum(int x, int y);
int get_num(void);

// �����Լ�
int main(void) 
{
    int a = 10, b = 20;
    int result;

    result = sum(a, b);
    result = get_num();
    printf("result : %d\n", result);

	system("pause");
	return EXIT_SUCCESS;
}

int get_num(void)
{
    //...
    return 0;
}

//�հ� �Լ�
int sum(int x, int y)
{
    int temp;
    temp = x + y;
    return temp;
}*/



/*void print_char(char ch, int count);

// �����Լ�
int main(void)
{
    print_char('@', 5);
    printf("\n");
    system("pause");
    return EXIT_SUCCESS;
}

void print_char(char ch, int count)
{
    for (int i = 0; i < count; i++)
    {
        printf("%c", ch);
    }

    return; // print_char�տ� void�־ return �������� ��ȯ�ɰ������� ��������
}*/



/*void fruit(int count);

int main(void)
{
    fruit(1);

    system("pause");
    return EXIT_SUCCESS;
}

void fruit(int count)
{
    printf("apple\n");
    if (count == 3)
    {
        return;
    }
    fruit(count+1);
}*/



int factorial(int count);

int main(void)
{
    int val;
    scanf("%d",&val);
    int result = factorial(val);
    printf("result = %d\n", result);

    system("pause");
    return EXIT_SUCCESS;
}

int factorial(int count)
{
    if (count==1)
    {
        return 1;
    }
    return count * factorial(count - 1);
}