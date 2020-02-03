/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수 // 반복문
  --------------------------------------------------------------------------------
  first created - 2020.02.03
  writer - YeoYeJi.
*/

#include <stdio.h>
#include <stdlib.h>

// 메인함수
int main(void) 
{
    /*int a = 1;

    while (a < 10)
    {
        if (a == 8)
        {
            break;
        }
        a *= 2;
    }

    printf("a = %d\n", a);*/
    int count = 0;
    while (1)
    {
        printf("Be happy!\n");
        count++;
        if (count == 10)
        {
            break;
        }
    }


	system("pause");
	return EXIT_SUCCESS;
}