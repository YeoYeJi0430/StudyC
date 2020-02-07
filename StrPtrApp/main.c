/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수, 구조체 포인터 학습
  --------------------------------------------------------------------------------
  first created - 2020.02.01
  writer - Hugo MG Sung.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*struct score
{
    int kor;
    int eng;
    int math;
};

// 메인함수
int main(void) 
{
    struct score yuni = { 90,80,70 };
    struct score* ps = &yuni;

    printf("국어 : %d\n", (*ps).kor);
    printf("영어 : %d\n", ps->eng);
    printf("수학 : %d\n", ps->math);

	system("pause");
	return EXIT_SUCCESS;
}*/

/*struct address
{
    char name[20];
    int age;
    char tel[20];
    char addr[80];
};

int main(void)
{
    struct address list[3] = {
        {"홍길동",23,"111-1111","울릉도"},
        {"이순신",35,"222-2222","서울"},
        {"장보고",19,"333-3333","완도"},
    };

    for (int i = 0; i < 3; i++)
    {
        printf("%10s%5d%15s%20s\n",
            list[i].name, list[i].age, list[i].tel, list[i].addr);
    }


    system("pause");
    return EXIT_SUCCESS;
}*/

/*struct address
{
    char name[20];
    int age;
    char tel[20];
    char addr[80];
};

void print_list(struct address* lp);

int main(void)
{
    struct address list[3] = {
        {"홍길동",23,"111-1111","울릉도"},
        {"이순신",35,"222-2222","서울"},
        {"장보고",19,"333-3333","완도"},
    };
    
    print_list(list);

    system("pause");
    return EXIT_SUCCESS;
}

void print_list(struct address* lp)
{
    for (int i = 0; i < 3; i++)
    {
        printf("%10s%5d%15s%20s\n",
            (lp + i)->name, (lp + i)->age, (lp + i)->tel, (lp + i)->addr);
    }
}*/

/*struct cracker
{
    int price;
    int calories;
};

int main(void)
{
    struct cracker a1;

    printf("가격과 열량을 입력하세요 : ");
    scanf("%s %d", (a1.price), &(a1.calories));
    printf("가격 : %d원\n", a1.price);
    printf("열량 : %dkcal\n", a1.calories);

    system("pause");
    return EXIT_SUCCESS;
}p491-2*/

struct list
{
    int num;
    struct list *next;
};

int main(void)
{
    struct list a = { 10, 0 }, b = { 20, 0 }, c = { 30, 0 };
    struct list* head = &a, * current;

    a.next = &b;
    b.next = &c;

    printf("head->num : %d\n", head->num);
    printf("head->next->num : %d\n", head->next->num);

    system("pause");
    return EXIT_SUCCESS;
}