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
    /*char str[80] = "applejam";
    int res;

    printf("���� ���ڿ� : %s\n", str);
    printf("���ڿ� �Է� : ");
    res = scanf("%s", str);
    printf("�Է� �� ���ڿ� : %s\n", str);*/

    /*char str1[80] = "cat";
    char str2[80];

    printf("%s\n", str1);
    strcpy(str1, "tiger");
    strcpy(str2, str1);  

    printf("%s, %s\n", str1, str2);*/

    char str[80];
    printf("���ڿ� �Է� : ");
    gets(str);
    puts("�Էµ� ���ڿ� : ");
    puts(str);

    


	system("pause");
	return EXIT_SUCCESS;
}