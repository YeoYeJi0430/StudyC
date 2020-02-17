/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  --------------------------------------------------------------------------------
  first created - 2020.02.17
  writer - YeoYeJi
*/

#include <stdio.h>
#include <stdlib.h>

#include <string.h>
#include <math.h>
#include <time.h>
#include <stdbool.h>

bool check_p(int num);

// 메인함수
int main(void) 
{
    for (int i = 2; i <= 100; i++)
    {
        if (check_p(i) == true)
        {
            printf("%d", i);
        }
    }
   
    
	system("pause");
	return EXIT_SUCCESS;
}

bool check_p(int num)
{
    for (int i = 2; i <= sqrt(num); i++)
    {
        if (num % i == 0)
        {
            return false;
        }
    }
    return true;
}