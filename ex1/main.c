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




// 메인함수
/*
int main(void) 
{
    int a[8] = { 69,10,30,2,16,8,31,22 };
    int minn=0;
    int temp;
    int i, j;

    for (int i = 0; i < 8; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    for ( i = 0; i < 8; i++)
    {
        minn = i;
        for ( j = i+1 ; j < 8; j++)
        {
            if (a[minn]>a[j])
            {
                minn = j;
            }

        }
        temp = a[i];
        a[i] = a[minn];
        a[minn] = temp;

        for (int i = 0; i < 8; i++)
        {
            printf("%d ", a[i]);
        }
        printf("\n");
        
    }

	system("pause");
	return EXIT_SUCCESS;
}
선택정렬*/

/*
int main(void)
{
    int n,x,y;
    int a[30][30] = { 0, };
    scanf("%d", &n);
    x = 1, y = (n + 1) / 2;

    for (int i = 1; i <= n*n; i+=1)
    {
        a[x][y] = i;

        if (i%n==0)
        {
            x++;
        }
        else
        {
            x--;
            y++;
            if (x==0)
            {
                x = n;
            }
            if (y == n+1)
            {
                y = 1;
            }
        }
    }

    for (int i = 1; i <= n; i+=1)
    {
        for (int j = 1; j <= n; j+=1)
        {
            printf("%5d", a[i][j]);
        }
        printf("\n");
    }


    system("pause");
    return EXIT_SUCCESS;
}
홀수 마방진*/

/*
void bubblesort(int a[], int size);


int main(void)
{
    int list[8] = { 69,10,30,2,16,8,31,22 };
    int size = 8;

    bubblesort(list,sizeof(list)/sizeof(int));

    for (int i = 0; i < 8; i++)
    {
        printf("%d ", list[i]);
    }

    system("pause");
    return EXIT_SUCCESS;
}

void bubblesort(int a[], int size)
{
    int temp;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}
버블정렬*/

/*
int size, i = 0;

void quicksort(int a[], int begin, int end);
int partition(int a[], int begin, int end);

int main(void)
{
    int list[8] = { 69,10,30,2,16,8,31,22 };
    size = 8;
    quicksort(list, 0, size-1);

    system("pause");
    return EXIT_SUCCESS;
}

void quicksort(int a[], int begin, int end)
{
    int p;
    if (begin<end)
    {
        p = partition(a, begin, end);
        quicksort(a, begin, p - 1);
        quicksort(a, p + 1, end);
    }
}

int partition(int a[], int begin, int end)
{
    int pivot, L, R, t;
    int temp;
    L = begin;
    R = end;
    pivot = (int)((begin + end) / 2.0);

    while (L<R)
    {
        while ((a[L]<a[pivot]) && (L<R))
        {
            L++;
        }
        while ((a[R]>=a[pivot]) && (L<R))
        {
            R--;
        }
        if (L<R)
        {
            temp = a[L];
            a[L] = a[R];
            a[R] = temp;

            if (L == pivot)
            {
                pivot = R;
            }
        }
        
    }
    temp = a[pivot];
    a[pivot] = a[R];
    a[R] = temp;
    for (t = 0; t < size; t++)
    {
        printf("%d ", a[t]);
    }
    printf("\n");
    return R;
}
퀵정렬*/

/*
int main(void)
{
    int per;
    int score[10];
    printf("사람 수 : ");
    scanf("%d", &per);

    for (int i = 0; i < per; i++)
    {
        scanf("%d", &score[i]);
    }
    system("pause");
    return EXIT_SUCCESS;
}
*/

/*
int main(void)
{
    int sale[4] = { 157,209,251,312 };

    for (int i = 0; i < 4; i++)
    {
        printf("\n address : %u sale[%d]=%d", &sale[i], i, sale[i]);
    }

    getchar();

    char a[80];
    int c_A = 0, c_a = 0, c_n = 0, c_s = 0;
    scanf("%s", &a);

    for (int i = 0; i < strlen(a); i++)
    {
        if ('A' <= a[i] && a[i] <= 'Z')
        {
            c_A++;
        }
        else if ('a' <= a[i] && a[i] <= 'z')
        {
            c_a++;
        }
        else if ('0' <= a[i] && a[i] <= '9')
        {
            c_n++;
        }
        else
        {
            c_s++;
        }

    }

    printf("대문자 : %d\n", c_A);
    printf("소문자 : %d\n", c_a);
    printf("숫자 : %d\n", c_n);
    printf("특수문자 : %d\n", c_s);

    printf("\n");

   
    system("pause");
    return EXIT_SUCCESS;
}
주소확인 , 문자수세기*/

