#ifdef _MSC_VER
#define _CRT_SECURE_NO_WARNINGS
#endif // _MSC_VER


#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("%d\n",100);
	printf("%lf\n", 3.141592);
	printf("%.1lf\n", 3.141592);
	printf("%.10lf\n", 3.14);
	printf("%.1lf + %.1lf = %.1lf\n", 10.2, 3.4, 10.2 + 3.4);

	printf("\n");

	printf("%.1lf\n", 1e10);
	printf("%.8lf\n", 3.14e-5);
	printf("%le\n", 0.0000314);
	printf("%.2le\n", 0.0000314);

	printf("\n");

	printf("%c\n", 'A');
	printf("%s\n","ABC");
	printf("%c은 %s입니다.\n",'1',"first");
	printf("%d\n", 'A'); //ASCII
	// type here

	system("pause");
	
	return 0;
}