/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ� // �迭
  --------------------------------------------------------------------------------
  first created - 2020.02.03
  writer - YeoYeJi
*/

#include <stdio.h>
#include <stdlib.h>

// �����Լ�
int main(void) 
{
    /*int ary[5], scan_res;

    ary[0] = 10;
    ary[1] = 20;
    ary[3] = ary[0] + ary[1];
    scan_res = scanf("%d", &ary[2]);

    for (int i = 0; i < 5; i++)
    {
        printf("ary[%d] = %d\n", i, ary[i]);
    } //ary[4]=�����Ⱚ

    //int ary[100] = { 0 };*/

    int score[5];
    int i;
    int total = 0;
    double avg;
    int count;

    count = sizeof(score) / sizeof(score[0]);

    for  (i = 0; i < count; (i++))
    {
        scanf("%d",&score[i]);
    }

    for (i = 0; i < count; (i++))
    {
        total += score[i];
    }
    avg = total / (double)count;
    printf("��� : %.1lf\n",avg);
	
    system("pause");
	return EXIT_SUCCESS;
}