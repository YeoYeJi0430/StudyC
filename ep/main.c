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

// 메인함수
/*int main(void) 
{
	int sum=0;
	for (int i = 1; i <= 300; i++)
	{
		if ((i % 3)==0)
		{
			sum += i;
		}
	}
	printf("%d\n", sum);

	system("pause");
	return EXIT_SUCCESS;
}*/


/*int main(void)
{
	int k;

	printf("0-100사이 정수 입력 : ");
	scanf("%d", &k);

	if (90<=k && k<=100)
	{
		printf("A\n");
	}

	else if (k>=70 && k<=89)
	{
		printf("B\n");
	}

	else if (k>=60 && k<=69)
	{
		printf("C\n");
	}

	else if (50<=k && k<=59)
	{
		printf("D\n");
	}
	else if (0<=k && k<=39)
	{
		printf("F\n");
	}


	system("pause");
	return EXIT_SUCCESS;
}*/


/*typedef struct student_t
{
	int kor;
	int eng;
	int mat;
} Student_t;

Student_t students[3];

int main(void)
{
	for (int i = 0; i < 3; i++)
	{
		printf("학생의 성적을 입력해주세요\n");
		printf("국어 : ");
		scanf("%d", &students[i].kor);
		printf("영어 : ");
		scanf("%d", &students[i].eng);
		printf("수학 : ");
		scanf("%d", &students[i].mat);
	}

	for (int i = 0; i < 3; i++)
	{
		printf("총점 : %d\n", students[i].eng + students[i].mat + students[i].kor);
		printf("평균 : %d\n", (students[i].eng + students[i].mat + students[i].kor) / 3);

	}

	printf("총점 : %d\n", students[0].eng + students[0].mat + students[0].kor);
	printf("평균 : %d\n", (students[0].eng + students[0].mat + students[0].kor)/3);

	printf("총점 : %d\n", students[1].eng + students[1].mat + students[1].kor);
	printf("평균 : %d\n", (students[1].eng + students[1].mat + students[1].kor) / 3);

	printf("총점 : %d\n", students[2].eng + students[2].mat + students[2].kor);
	printf("평균 : %d\n", (students[2].eng + students[2].mat + students[2].kor) / 3);



	system("pause");
	return EXIT_SUCCESS;
}*/

void add_first(char* item);

struct node
{
	char* data;
	struct node* next;	//다음 노드의 주소를 저장할 필드
};

typedef struct node Node;
Node* head = NULL;	//연결리스트의 첫 번째 노드의 주소를 저장할 포인터	




int main(void)
{
	head = (Node*)malloc(sizeof(Node));
	head->data = "Tuesday";
	head->next = NULL;

	Node* q = (Node*)malloc(sizeof(Node));
	q->data = "Thursday";
	q->next = NULL;
	head->next = q;

	q = (Node*)malloc(sizeof(Node));
	q->data = "Monday";
	q->next = head;
	head = q;

	Node* tmp = (Node*)malloc(sizeof(Node));
	tmp->data = "Ann";
	tmp->next = head;
	head = tmp;

	char item[20] = { 0 };
	printf("입력 : ");
	scanf("%s", item);
	add_first(item);
	
	
	Node* p = head;
	while (p != NULL)
	{
		printf("%s\n", p->data);
		p = p->next;
	}

	
	system("pause");
	return EXIT_SUCCESS;
}

void add_first(char* item)
{
	Node* temp = (Node*)malloc(sizeof(Node));
	temp->data = item;
	temp->next = head;
	head = temp;
}


