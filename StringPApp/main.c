/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수, 문자열 포인터 학습
  --------------------------------------------------------------------------------
  first created - 2020.02.06
  writer - YeoYeJi
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 메인함수
int main(void) 
{
    /*char* animal[4];

    animal[0] = "elephant";
    animal[1] = "tiger";
    animal[2] = "cat";
    animal[3] = "dog";

    for (int i = 0; i < 4; i++)
    {
        printf("%s\n", animal[i]);
    }*/

    /*int ary1[4] = { 1,2,3,4 };
    int ary2[4] = { 5,6,7,8 };
    int ary3[4] = { 9,10,11,12 };
    int* pry[3] = { ary1,ary2,ary3 };

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%5d", pry[i][j]);
        }
        printf("\n");
    }*/

    char mark[5][5] = { 0 };

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == j)
            {
                mark[i][j] = 'X';
            }
            else
            {
                mark[i][j] = 'O';
            }
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%c\t", mark[i][j]);
        }
        printf("\n");
    } //402p 연습문제3

	system("pause");
	return EXIT_SUCCESS;
}