/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수 // 배열
  --------------------------------------------------------------------------------
  first created - 2020.02.03
  writer - YeoYeJi
*/

#include <stdio.h>
#include <stdlib.h>

// 메인함수
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
    } //ary[4]=쓰레기값

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
    printf("평균 : %.1lf\n",avg);
	
    system("pause");
	return EXIT_SUCCESS;
}