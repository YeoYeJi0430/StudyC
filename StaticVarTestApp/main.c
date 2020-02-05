/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수, 정적 변수 학습
  --------------------------------------------------------------------------------
  first created - 2020.02.05
  writer - YeoYeJi
*/

#include <stdio.h>
#include <stdlib.h>

/*void auto_func(void);
void static_func(void);

// 메인함수
int main(void) 
{
    
    printf("일반 지역 변수(auto)를 사용한함수...\n");
    for (int i = 0; i < 3; i++)
    {
        auto_func();
    }

    printf("정적 지역 변수(static)를 사용한함수...\n");
    for (int i = 0; i < 3; i++)
    {
        static_func();
    }
	system("pause");
	return EXIT_SUCCESS;
}

void auto_func(void)
{
    auto int a = 0;

    a++;
    printf("%d\n", a);
}

void static_func(void)
{
    static int a;

    a++;
    printf("%d\n", a);
}*/

/*int main(void)
{
    register int i;
    auto int sum = 0;

    for ( i = 1; i <= 10000; i++)
    {
        sum += i;
    }

    printf("%d\n", sum);

    system("pause");
    return EXIT_SUCCESS;
}*/

/*void add_ten(int* pa);

int main(void)
{
    int a = 10;

    add_ten(&a);
    printf("a : %d\n", a);

    system("pause");
    return EXIT_SUCCESS;
}

void add_ten(int* pa)
{
    *pa = *pa + 10;
}*/

int* sum(int a, int b);

int main(void)
{
    int* resp;

    resp = sum(10, 20);
    printf("두 정수의 합 : %d\n", *resp);

    system("pause");
    return EXIT_SUCCESS;
}

int* sum(int a, int b)
{
    static int res;

    res = a + b;

    return &res;
}