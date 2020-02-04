/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수, 배열과포인터2
  --------------------------------------------------------------------------------
  first created - 2020.02.04
  writer - YeoYeJi
*/

#include <stdio.h>
#include <stdlib.h>
/*
void print_ary(int* pa);

// 메인함수
int main(void) 
{
    int ary[5] = { 10,20,30,40,50 };

    print_ary(ary);

	system("pause");
	return EXIT_SUCCESS;
}

//배열 출력함수
void print_ary(int* pa)
{
    for (int i = 0; i < 5; i++)
    {
        printf("%5d", pa[i]);
    }

    printf("\n");
}
*/

void print_ary(int* pa, int size);

int main(void)
{
    int ary[5] = { 10,20,30,40,50 };
    int ary2[7] = { 10,20,30,40,50,60,70 };
    int size = 0;
    size = sizeof(ary) / sizeof(ary[0]);
    //size = 5;
    print_ary(ary, size);
    size = sizeof(ary2) / sizeof(ary[0]);
    //size  7;
    print_ary(ary2, size);

    system("pause");
    return EXIT_SUCCESS;
}

void print_ary(int* pa, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", pa[i]);
    }
}