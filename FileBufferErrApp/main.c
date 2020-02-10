/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수, 버퍼 공유 발생 문제
  --------------------------------------------------------------------------------
  first created - 2020.02.10
  writer - YeoYeJi
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 메인함수
int main(void) 
{
    FILE* fp;
    int age;
    char name[20];

    fp = fopen("a.txt", "r");

    if (fp == NULL)
    {
        return EXIT_FAILURE;
    }

    fscanf(fp, "%d", &age);
    if (fgetc(fp) != '\n') {}
    fgets(name, sizeof(name), fp);
    printf("나이 : %d, 이름 : %s", age, name);
    fclose(fp);

    system("pause");
	return EXIT_SUCCESS;
}