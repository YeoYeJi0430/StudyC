#include <stdio.h>

extern int count; //main.c int count����
int total = 0; //main.c (�ٸ�),input.c���� ���� ����

int input_data(void)
{
	int pos;

	while (1)
	{
		printf("��� �Է� : ");
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