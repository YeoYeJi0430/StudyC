/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수 // 포인터
  --------------------------------------------------------------------------------
  first created - 2020.02.04
  writer - YeoYeji
*/

#include <stdio.h>
#include <stdlib.h>

// 메인함수
int main(void) 
{
    /*int a = 0;
    double b = 0;
    char c = 65; // A

    printf("a의 주소 : %u\n", &a); //&a = a의 주소
    printf("b의 주소 : %u\n", &b);
    printf("c의 주소 : %u\n", &c);*/

    /*int a = 0;
    int* pa;

    pa = &a;
    pa = 10;

    printf("a의 주소 : %u\n", &a);
    printf("pa의 값 : %u\n", pa); //pa에 a의 주소
    printf("pa의 주소 : %u\n", &pa);
    printf("포인터로 a값 출력 : %d\n", *pa);
    printf("변수명으로 a값 출력 : %d\n", a); //238p

    scanf("%d", pa);
    printf("%d\n", a);*/

    /*int a = 10, b = 20, total;
    double avg;
    int* pa, * pb; //선언
    int* pt = &total; //선언+초기화
    double* pg = &avg;

    pa = &a;//초기화
    pb = &b;
    //pt = &total;
    //pg = &avg;

    *pt = *pa + *pb;
    *pg = *pt / 2.0;

    printf("두 정수의 값 : %d, %d\n", *pa, *pb);
    printf("두 정수의 합 : %d\n", *pt);
    printf("두 정수의 평균 : %.1lf\n", *pg);*/

    /*int a = 10, b = 20;
    const int* pa = &a;
    printf("변수 a 값 : %d\n", *pa);
    pa = &b;
    printf("변수 b 값 : %d\n", *pa);
    pa = &a;
    //a = 20;
    printf("변수 a 값 : %d\n", *pa);*/

    /*char ch = 'A';
    int in = 10;
    double db = 10.4;

    char* pc = &ch;
    int* pi = &in;
    double* pd = &db;

    printf("ch size : %u\n", sizeof(ch));
    printf("in size : %u\n", sizeof(in));
    printf("db size : %u\n", sizeof(db));
    printf("\n");
    printf("pc size : %u\n", sizeof(pc));
    printf("pi size : %u\n", sizeof(pi));
    printf("pd size : %u\n", sizeof(pd)); //주소 담고있어서 4바이트*/

    int a = 10;
    int* p = &a;
    double* pd;

    pd = p;
    printf("a : %d\n", a);
    printf("p : %d\n", *p);
    printf("pd : %lf\n", *pd);


	system("pause");
	return EXIT_SUCCESS;
}