/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�, ������ ���� �н�
  --------------------------------------------------------------------------------
  first created - 2020.02.06
  writer - YeoYeJi
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*void swap_ptr(char** ppa, char** ppb);

int main(void) 
{
    char* pa = "success";
    char* pb = "failure";
    
    printf("pa -> %s, pb -> %s\n", pa, pb);
    swap_ptr(&pa, &pb);
    printf("pa -> %s, pb -> %s\n", pa, pb);

	system("pause");
	return EXIT_SUCCESS;
}

void swap_ptr(char** ppa, char** ppb)
{
    char* temp;
    temp = *ppa;
    *ppa = *ppb;
    *ppb = temp;
}*/

/*void print_str(char* pps, int cnt);

int main(void)
{
    char* ptr_ary[] = { "eagel","tiger","lion","squirrel" };
    int count;

    count = sizeof(ptr_ary) / sizeof(ptr_ary[0]);
    print_str(ptr_ary, count);

    system("pause");
    return EXIT_SUCCESS;
    
}

void print_str(char** pps, int cnt)
{
    for (int i = 0; i < cnt; i++)
    {
        printf("%s\n", pps[i]);
    }
}*/

/*int main(void)
{
    int ary[5] = { 1, 2, 3, 4 };

    printf("  ary�� �� : %u\t", ary);
    printf("ary�� �ּ� : %u\n", &ary);
    printf("   ary + 1 : %u\t", ary + 1);
    printf("  &ary + 1 : %u\n", &ary + 1);

    system("pause");
    return EXIT_SUCCESS;

}*/

/*int main(void)
{
    int ary[5] = { 1, 2, 3, 4 };

    printf("%d\n", *ary);
    printf("%p\n", *&ary);
    printf("%p\n", (ary + 1));
    printf("%p\n", &ary + 1);
    printf("%d\n", *(ary + 1));
    printf("%p\n", *&ary + 1);

    system("pause");
    return EXIT_SUCCESS;

}*/

/*int main(void)
{
    int ary[3][4] = { {1,2,3,4}, {5,6,7,8}, {9,10,11,12} };
    int(*pa)[4];

    pa = ary;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%5d", pa[i][j]);
        }
        printf("\n");
    }
    
    system("pause");
    return EXIT_SUCCESS;

}*/

void print_ary(int(*pa)[4]);

int main(void)
{
    int ary[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };

    print_ary(ary);

    system("pause");
    return EXIT_SUCCESS;
}

void print_ary(int(*pa)[4])
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%5d", pa[i][j]);
        }
        printf("\n");
    }
}