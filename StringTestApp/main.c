/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  --------------------------------------------------------------------------------
  first created - 2020.02.01
  writer - Hugo MG Sung.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// 메인함수
int main(void) 
{
    /*char str[80] = "applejam";
    int res;

    printf("최초 문자열 : %s\n", str);
    printf("문자열 입력 : ");
    res = scanf("%s", str);
    printf("입력 후 문자열 : %s\n", str);*/

    /*char str1[80] = "cat";
    char str2[80];

    printf("%s\n", str1);
    strcpy(str1, "tiger");
    strcpy(str2, str1);  

    printf("%s, %s\n", str1, str2);*/

    char str[80];
    printf("문자열 입력 : ");
    gets(str);
    puts("입력된 문자열 : ");
    puts(str);

    


	system("pause");
	return EXIT_SUCCESS;
}