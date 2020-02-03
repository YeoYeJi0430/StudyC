/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수 // 반복문
  --------------------------------------------------------------------------------
  first created - 2020.02.03
  writer - YeoYeJi
*/

#include <stdio.h>
#include <stdlib.h>

// 메인함수
int main(void) 
{
    /*int a = 1;
    for (int i = 0; i < 3; i++)
    {
        printf("i = %d\n", i);
        a = a * 2;
        printf("a = %d\n", a);
    }*/


    /*for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("*");
        }
        printf("\n");
    }*/
    int sum = 0;

    for (int i = 1; i < 100; i++)
    {
        if ((i % 3) == 0)
        {
            continue; // break;
        }
        sum += i;
    }
    printf("sum = %d\n", sum);


	system("pause");
	return EXIT_SUCCESS;
}