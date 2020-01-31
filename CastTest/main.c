#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif // _MSC_VER


#include <stdio.h>
#include <stdlib.h>

int main()
{
	/*int a = 20, b = 3;
	double res;

	res = ((double)a) / ((double)b); // ((double)a) / ((double)b) , (double)(a / b) 다름
	printf("a = %d, b = %d\n", a, b);
	printf("a / b 의 결과 : %.1lf\n", res);

	a = (int)res;
	printf("(int) %.1lf의 결과 : %d\n", res, a);*/

	int a = 10;
	double b = 3.14;
	long double ld = 345;

	printf("int형 변수의 크기 : %d\n", sizeof(a));
	printf("double형 변수의 크기 : %d\n", sizeof(b));
	printf("정수형 상수의 크기 : %d\n", sizeof(10));
	printf("수식의 결과값의크기 : %d\n", sizeof(3.14+1.56));
	printf("char 자료형의 크기 : %d\n", sizeof(char));
	printf("long double 자료형의 크기 : %d\n", sizeof(ld)); // 크기를 바이트 단위 , long double기본 8바이트

	system("pause");
	
	return 0;
}