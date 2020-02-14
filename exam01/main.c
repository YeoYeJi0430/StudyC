/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수
  --------------------------------------------------------------------------------
  first created - 2020.02.14
  writer - YeoYeJi
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct
{
    int num;
    char name[50];
    int phone;
    char mail[50];
}Manage;

void input_business_card(Manage *pary);
void show_all_cards(Manage* pary);
void search_business_card(Manage* pary,int m);

// 메인함수
int main(void)
{
    Manage ary[3];
    int sel;
    //ary[0].num = 0;
  
    while(1)
    {
        printf("1:입력 2:수정 3:삭제 4:전체출력 5:검색 6:종료\n");
        scanf("%d", &sel);
       /* for (int i = 0; i < 3; i++)
        {
            ary[i].num += i;
        }*/
        switch (sel)
        {
        case 1:
            input_business_card(ary);
            show_all_cards(ary);
            break;
        case 4:
            show_all_cards(ary);
        /*case 5:
            printf("명함번호 : ");
            scanf("%d", &m);
            search_business_card(ary,m);
            break;*/
        case 6:
            break;
        }
        
        /*if (sel == 1)
        {
            input_business_card(ary);
            show_all_cards(ary);
        }
        else if (sel == 4)
        {
            show_all_cards(ary);
        }
        else if (sel == 6)
        {
            break;
        }*/
        
    }
    
	system("pause");
	return EXIT_SUCCESS;
}

void input_business_card(Manage* pary)
{
    for (int i = 0; i < 3; i++)
    {
        printf("이름 : ");
        scanf("%s", pary->name);
        printf("폰 번호 : ");
        scanf("%d", &pary->phone);
        printf("이메일 : ");
        scanf("%s", pary->mail);
        pary++;
    }
}

void show_all_cards(Manage* pary)
{
    for (int i = 0; i < 3; i++)
    {

        printf("%d %s %d %s\n", i+1, pary->name, pary->phone, pary->mail);
        pary++;
    }
}

void search_business_card(Manage* pary,int m)
{

}