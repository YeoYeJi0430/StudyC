/*
  filename - main.c
  version - 1.0
  description - 기본 메인 함수, 사용자정의자료형
  --------------------------------------------------------------------------------
  first created - 2020.02.07
  writer - YeoYeJi
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*struct student
{
    int num;
    double grade;
};

// 메인함수
int main(void) 
{
    struct student s1;
    s1.num = 2;
    s1.grade = 2.7;

    printf("학번 : %d\n", s1.num);
    printf("학점 : %.1lf\n", s1.grade);

	system("pause");
	return EXIT_SUCCESS;
}*/

/*struct profile
{
    char name[20];
    int age;
    double height;
    char* intro;
};

// 메인함수
int main(void)
{
    struct profile p1;
    strcpy(p1.name, "여예지");
    p1.age = 17;
    p1.height = 164.5;

    p1.intro = (char*)malloc(80);
    printf("자기소개 : ");
    gets(p1.intro);

    printf("이름 : %s\n", p1.name);
    printf("나이 : %d\n", p1.age);
    printf("키 : %.1lf\n", p1.height);
    printf("자기소개 : %s\n", p1.intro);
    
    free(p1.intro);

    system("pause");
    return EXIT_SUCCESS;
}*/

/*struct profile
{
    int age;
    double height;
};

struct student
{
    struct profile pf;
    int id;
    double grade;
};

// 메인함수
int main(void)
{
    struct student yeji;

    yeji.pf.age = 17;
    yeji.pf.height = 164.5;
    yeji.id = 135;
    yeji.grade = 4.3;

    printf("나이 : %d\n", yeji.pf.age);
    printf("  키 : %.1lf\n", yeji.pf.height);
    printf("학번 : %d\n", yeji.id);
    printf("학점 : %.1lf\n", yeji.grade);

    system("pause");
    return EXIT_SUCCESS;
}*/

struct student
{
    int id;
    char name[20];
    double grade;
};

// 메인함수
int main(void)
{
    struct student s1 = {315,"홍길동", 2.4},
                   s2 = {316,"이순신",3.7},
                   s3 = {317,"세종대왕",4.4};

    struct student Max;

    Max = s1;
    if (s2.grade > Max.grade)
    {
        Max = s2;
    }
    if (s3.grade > Max.grade)
    {
        Max = s3;
    }

    printf("학번 : %d\n", Max.id);
    printf("이름 : %s\n", Max.name);
    printf("학점 : %.1lf\n", Max.grade);

    system("pause");
    return EXIT_SUCCESS;
}