#include <stdio.h>

extern int count; //main.c int count공유
int total = 0; //main.c (다름),input.c에서 쓰는 전역

int input_data(void)
{
	int pos;

	while (1)
	{
		printf("양수 입력 : ");
		scanf("%d", &pos);
		if (pos < 0)
		{
			break;
		}
		count++;
		total += pos;
	}
	return total;
}