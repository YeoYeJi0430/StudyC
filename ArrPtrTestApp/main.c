/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�, �迭�� ������
  --------------------------------------------------------------------------------
  first created - 2020.02.04
  writer - YeoYeJi
*/

#include <stdio.h>
#include <stdlib.h>

// �����Լ�
int main(void) 
{
    /*int ary[3] = { 0 };
    int i;

    *(ary + 0) = 10;
    *(ary + 1) = *(ary + 0) + 10;

    printf("�� ��° �迭 ��ҿ� Ű���� �Է� : ");
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

    printf("�迭�� �� :");
    for (int i = 0; i < 3; i++)
    {
        printf("%d\t", pa[i]); //*(pa+i)
        //printf("%5d", *pa);
        //pa++;
    } //pa+i �� pa++ �ٸ�

    int ary[5] = { 10,20,30,40,50 };
    int* pa = ary;
    int* pb = pa + 3;

    printf("pa : %u\n", pa);
    printf("pb : %u\n", pb);
    pa++;
    printf("pb-pa : %u\n", pb - pa);

    printf("�տ� �ִ� �迭 ����� �� ��� : ");
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