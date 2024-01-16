#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include<stdio.h>
#include<string.h>
#include <stdlib.h>
typedef struct student
{
	int i;
	char name[20];
	struct student* next;
}stu;
stu* create()
{
	stu* head = NULL;
	stu* p1, *p2;
	p1 = p2 = (stu*)malloc(sizeof(stu));
	printf("请输入：\n");
	scanf("%d %s", &p1->i, &p1->name);
	int i = 0;
	while (p1->i != 0)
	{
		i++;
		if (i == 1)
		{
			head = p1;
		}
		else
		{
			p2->next = p1;
			p2 = p1;

		}
		p1 = (stu*)malloc(sizeof(stu));
		scanf("%d %s", &p1->i, &p1->name);

	}
	p2->next = NULL;
	return head;
}
void print(stu* head)
{
	stu* p;
	p = head;
	int n = 0;
	while (p != NULL)
	{
		printf("学生信息：\n");
		printf("数字：%d 名字：%s", p->i, p->name);
		p = p->next;
		n++;
	}
}
int main()
{
	stu* head;
	head = create();
	print(head);
	return 0;
}