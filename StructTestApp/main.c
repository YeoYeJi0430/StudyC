/*
  filename - main.c
  version - 1.0
  description - �⺻ ���� �Լ�, ����������ڷ���
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

// �����Լ�
int main(void) 
{
    struct student s1;
    s1.num = 2;
    s1.grade = 2.7;

    printf("�й� : %d\n", s1.num);
    printf("���� : %.1lf\n", s1.grade);

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

// �����Լ�
int main(void)
{
    struct profile p1;
    strcpy(p1.name, "������");
    p1.age = 17;
    p1.height = 164.5;

    p1.intro = (char*)malloc(80);
    printf("�ڱ�Ұ� : ");
    gets(p1.intro);

    printf("�̸� : %s\n", p1.name);
    printf("���� : %d\n", p1.age);
    printf("Ű : %.1lf\n", p1.height);
    printf("�ڱ�Ұ� : %s\n", p1.intro);
    
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

// �����Լ�
int main(void)
{
    struct student yeji;

    yeji.pf.age = 17;
    yeji.pf.height = 164.5;
    yeji.id = 135;
    yeji.grade = 4.3;

    printf("���� : %d\n", yeji.pf.age);
    printf("  Ű : %.1lf\n", yeji.pf.height);
    printf("�й� : %d\n", yeji.id);
    printf("���� : %.1lf\n", yeji.grade);

    system("pause");
    return EXIT_SUCCESS;
}*/

struct student
{
    int id;
    char name[20];
    double grade;
};

// �����Լ�
int main(void)
{
    struct student s1 = {315,"ȫ�浿", 2.4},
                   s2 = {316,"�̼���",3.7},
                   s3 = {317,"�������",4.4};

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

    printf("�й� : %d\n", Max.id);
    printf("�̸� : %s\n", Max.name);
    printf("���� : %.1lf\n", Max.grade);

    system("pause");
    return EXIT_SUCCESS;
}