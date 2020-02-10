/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  --------------------------------------------------------------------------------
  first created - 2020.02.10
  writer - Hugo MG Sung.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 메인함수
int main(void) 
{
    int arr1[3] = { 1,2,3 };
    double arr2[3] = { 1.1,2.2,3.3 };

    printf("%d %g \n", *arr1, *arr2);
    *arr1 += 100;
    *arr2 += 120.5;
    printf("%d %g \n", arr1[0], arr2[0]);

	system("pause");
	return EXIT_SUCCESS;
}