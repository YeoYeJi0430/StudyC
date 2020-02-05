/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수, 변수영역
  --------------------------------------------------------------------------------
  first created - 2020.02.05
  writer - YeoYeJi
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
void assign(void);

// 메인함수
int main(void) 
{
    int a = 0;
	
    assign();
    printf("main 함수 a : %d\n", a);

    system("pause");
	return EXIT_SUCCESS;
}

void assign(void)
{
    int a;

    a = 10;
    printf("assign 함수 a : %d\n", a);
    return;
}*/

/*int main(void)
{
    int a = 10, b = 20;

    printf("교환 전 a와 b의 값: %d, %d\n", a, b);
    {
        int temp;

        temp = a;
        a = b;
        b = temp;
        // printf("temp의 값 : %d\n", temp);
    } // 블록안에서 temp선언 -> 블록끝나면 temp사라짐
    printf("교환 후 a와 b의 값 : %d, %d\n", a, b);
    // printf("temp의 값 : ", temp);

    system("pause");
    return EXIT_SUCCESS;
}*/

void assign10(void);
void assign20(void);

int a;

int main(void)
{
    printf("함수 호출 전 a 값 : %d\n", a);

    assign10();
    assign20();

    printf("함수 호출 후 a 값 : %d\n", a);

    system("pause");
    return EXIT_SUCCESS;
}
void assign10(void)
{
    a = 10;
}
void assign20(void)
{
    int a; //  static int a;
    a = 20;
}