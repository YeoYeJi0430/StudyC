/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
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

// 메인함수
int main(void) 
{
    struct marriage m1 = { "Andy",22,185.5 };
    struct marriage* mp = &m1;

    printf("이름 : %s\n", mp->name);
    printf("나이 : %d\n", mp->age);
    printf("키 : %.1lf\n", mp->height);

	system("pause");
	return EXIT_SUCCESS;
}