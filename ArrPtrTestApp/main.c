/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수, 배열과 포인터
  --------------------------------------------------------------------------------
  first created - 2020.02.04
  writer - YeoYeJi
*/

#include <stdio.h>
#include <stdlib.h>

// 메인함수
int main(void) 
{
    /*int ary[3] = { 0 };
    int i;

    *(ary + 0) = 10;
    *(ary + 1) = *(ary + 0) + 10;

    printf("세 번째 배열 요소에 키보드 입력 : ");
    scanf("%d", ary + 2);

    for ( i = 0; i < (sizeof(ary) / sizeof(ary[0])); i++) //(sizeof(ary) / sizeof(ary[0]))=3
    {
        printf("%5d", *(ary + i));
    }*/

    /*int ary[3] = { 0 };
    int* pa = ary;

    //printf("%d", pa);
    //printf("%d", ary);

    *pa = 10;
    *(pa + 1) = 20;
    pa[2] = pa[0] + pa[1];

    for (int i = 0; i < 3; i++)
    {
        printf("%5d", pa[i]);
    }*/

    int ary[3] = { 10,20,30 };
    int* pa = ary;

    printf("배열의 값 :");
    for (int i = 0; i < 3; i++)
    {
        printf("%d\t", pa[i]); //*(pa+i)
        //printf("%5d", *pa);
        //pa++;
    } //pa+i 랑 pa++ 다름

    int ary[5] = { 10,20,30,40,50 };
    int* pa = ary;
    int* pb = pa + 3;

    printf("pa : %u\n", pa);
    printf("pb : %u\n", pb);
    pa++;
    printf("pb-pa : %u\n", pb - pa);

    printf("앞에 있는 배열 요소의 값 출력 : ");
    if (pa < pb)
    {
        printf("%d\n", *pa);
    }
    else
    {
        printf("%d\n", *pb);
    }

	system("pause");
	return EXIT_SUCCESS;
}