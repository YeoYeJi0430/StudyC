/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�
  --------------------------------------------------------------------------------
  first created - 2020.02.10
  writer - Hugo MG Sung.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//void print_month(int* mp);

// �����Լ�
/*
int main(void) 
{
    int a, b, res;

    printf("�� �� �Է� : ");
    scanf("%d %d", &a, &b);

    res = (a > b) ? a : b;

    printf("ū �� : %d\n", res);

    char ch;

    printf("���� �Է� : ");
    scanf("%c", &ch);
    printf("%c������ �ƽ�Ű �ڵ� �� : %d\n", ch, ch);

	system("pause");
	return EXIT_SUCCESS;
}
*/

/*int main(void)
{
    int month[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
    int* mp;
    print_month(month);
    system("pause");
    return EXIT_SUCCESS;
}

void print_month(int* mp)
{
    for (int i = 0; i < 12; i++)
    {
        if (*(mp+i) % 5 == 0)
        {
            printf("%d�� : %d\n", i + 1, mp[i]);
        }
        printf("%d�� : %d\t",i+1 , mp[i]);
        printf("%d�� : %d��\t",i+1, *(mp + i));
        if (*(mp+i) %5 == 0)
        {
            printf("\n");
        }
    }
    printf("\n");
}*/

/*
void input_nums(int* lotto_nums);
void print_nums(int* lotto_nums);

int main(void)
{
    int lotto_nums[6];

    input_nums(lotto_nums);
    print_nums(lotto_nums);

    system("pause");
    return EXIT_SUCCESS;
}

void input_nums(int* lotto_nums)
{
    int num;
    int dup;
    for (int i = 0; i < 6; i++)
    {
        printf("��ȣ �Է� : ");
        scanf("%d", &num);
        dup = 0;
        for (int j = 0; j < i; j++)
        {
            if (num == lotto_nums[j])
            {
                dup = 1;
                break;
            }
        }
        if (!dup)
            {
            lotto_nums[i] = num;
            //*lotto_nums = &num;
            }
        else
            {
            printf("���� ��ȣ�� �ֽ��ϴ�!\n");
            i--;
            }
        
    }
}

void print_nums(int *lotto_nums)
{
    printf("�ζ� ��ȣ : ");

    for (int i = 0; i < 6; i++)
    {
        printf("%d", lotto_nums[i]);
    }
   
}
292p */