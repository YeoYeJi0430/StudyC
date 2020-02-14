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

typedef struct
{
    int num;
    char name[20];
    int kor, eng, mat;
    int tot;
    double avg;
    char grade;
} Student;

void input_data(Student* pary);
void calc_data(Student* pary);
void print_data(Student* pary);

// 메인함수
int main(void) 
{
    Student ary[3];

    input_data(ary);
    calc_data(ary);
    
    printf("데이터 : \n");
    print_data(ary);

   

    
    
	system("pause");
	return EXIT_SUCCESS;
}

void input_data(Student* pary)
{
    for (int i = 0; i < 3; i++)
    {
        printf("학번 : ");
        scanf("%d", &pary->num);
        printf("이름 : ");
        scanf("%s", pary->name);
        printf("국어, 영어, 수학 점수 : ");
        scanf("%d %d %d", &pary->kor, &pary->eng, &pary->mat);
        pary++;
    }
}

void calc_data(Student* pary)
{
    for (int i = 0; i < 3; i++)
    {
        pary->tot = pary->kor + pary->eng + pary->mat;
        pary->avg = pary->tot / 3.0;
        if (pary->avg >= 90.0)
        {
            pary->grade = 'A';
        }
        else if (pary->avg >= 80.0)
        {
            pary->grade = 'B';
        }
        else if (pary->avg >= 70.0)
        {
            pary->grade = 'C';
        }
        else
        {
            pary->grade = 'F';
        }
        pary++;
    }
}

void print_data(Student* pary)
{
    for (int i = 0; i < 3; i++)
    {
        printf("%5d%7s%5d%5d%5d%5d%7.1lf%5c\n", pary->num, pary->name, pary->kor,pary->eng,pary->mat,pary->tot,pary->avg,pary->grade);
        pary++;
    }
}