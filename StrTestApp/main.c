/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�, ���ڿ�
  --------------------------------------------------------------------------------
  first created - 2020.02.05
  writer - YeoYeJi
*/

#include <stdio.h>
#include <stdlib.h>

// �����Լ�
int main(void) 
{
    /*char fruit[80] = "apple";

    printf("apple�� ����� ���� �ּ� �� : %p\n", "apple");
    printf("fruit�� ����� ���� �ּ� �� : %p\n", fruit);
    printf("�� ��° ������ �ּ� �� : %p\n", "apple"+1);
    printf("ù ��° ���� : %c\n", *"apple");
    printf("�� ��° ���� : %c\n", *("apple"+1));
    printf("�迭�� ǥ���� �� ��° ���� : %c\n", "apple"[4]);
    printf("fruit�� ���� �ּ� : %p\n", fruit);*/

    /*char* dessert = "apple";

    printf("���� �Ľ��� %s�Դϴ�.\n", dessert);
    dessert = "banana";
    printf("���� �Ľ��� %s�Դϴ�.\n", dessert);*/

    /*char str[80];

    printf("���ڿ� �Է� : ");
    scanf("%s", str);
    printf("ù ��° �ܾ� : %s\n", str);
    scanf("%s", str);
    printf("���ۿ� ���� �ִ� �� ��° �ܾ� : %s\n", str);*/

    /*char str[80];

    printf("�������� ���ڿ� �Է� : ");
    gets(str);
    printf("���ڿ��� : %s\n", str);*/

    /*char str[80];
    printf("������ ���Ե� ���ڿ� �Է� : ");
    fgets(str, sizeof(str), stdin);
    printf("�Էµ� ���ڿ��� %s�Դϴ�\n", str);*/

    /*int age;
    char name[20];

    printf("���� �Է� : ");
    scanf("%d", &age);
    //getchar();

    printf("�̸� �Է� : ");
    gets(name);
    printf("���� : %d, �̸� : %s\n", age, name);*/

    char str[80] = "apple juice";
    char* ps = "banana";

    puts(str);
    fputs(ps, stdout); //������� | puts->�ڵ�����
    puts("milk");

    system("pause");
	return EXIT_SUCCESS;
}