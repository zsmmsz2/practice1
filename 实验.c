#define _CRT_SECURE_NO_WARNINGS 1
#pragma warning(disable:6031)
#include "stdio.h"
#include "stdlib.h"
#include"string.h"
#include"math.h"
//
//void Com(int* a, int n)
//{
//	int i = 0;
//	int temp = 0;//������ʱ����
//	for (; i < n - 1; i++)//������������
//	{
//		for (int j = 0; j < n - i - 1; j++)
//		{
//			if (*(a + j) > *(a + j + 1))//����ֵ����
//			{
//				temp = *(a + j + 1);
//				*(a + j + 1) = *(a + j);
//				*(a + j) = temp;
//
//			}
//		}
//	}
//
//}
//int main()
//{
//	int a[6] = { 2,4,1,3,6,5 };//����һ����������
//	Com(a, 6);//���ú���
//	int* p = a;//����ָ��ָ������a
//	printf("����������\n");
//	for (; p < a + 6; p++)//����ָ��������
//	{
//		printf("%d", *p);
//	}
//	return 0;
//}
//char* CopyEnd(char* p, int n)//���巵��ֵΪָ��ĺ���
//{
//	int t = strlen(p);//���㳤��
//	char q[100] = { 0 };
//	for (int i = t - n ,j=0; i < t; i++,j++)
//	{
//		q[j] = *(p + i);//��n������ַ�����q
//
//	}
//	return q;//����q
//	
//
//}
//int main()
//{
//	char* b;//�����ַ�ָ������
//	char a[] = "1234567890";
//	b=CopyEnd(a, 4);//����ָ���b
//	printf("%s", b);//���
//	return 0;
//}
//int main()
//{
//	int a[4][5] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
//	int* p1, ** p2;
//	int(*p3)[5];
//	int* p4[4];
//	p1 = &a[0][0];
//	p2 = p4;
//	p3 = a;
//	for (int i = 0; i < 4; i++)
//	{
//		p4[i] = &a[i];
//
//	}
//	for (int i = 0; i < 4; i++)
//	{
//		for (int j = 0; j < 5; j++)
//		{
//			printf("%2d %2d %2d %2d %2d \n", a[i][j], *(p1 + i * 5 + j), p2[i][j], p3[i][j], p4[i][j]);
//		}
//	}
//	return 0;
//}
//int main()
//{     //���ݷ�ΧΪ1��24
//	int a[2][3][4] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24 };
//	int* p1;int **p2;
//	int(*p3)[4];
//	int* p4[4];
//	p1 = a[0][0];
//	p2 = (int**)a;
//	p3 = a;
//	p4[0] = a[0];
//	p4[1] = a[1];
//
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			
//		}
//
//	}
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			for (int k = 0; k < 4; k++)
//			{
//				printf("%2d %2d %2d %2d %2d\n", a[i][j][k], *(p1 + i * 3* 4 + j * 4 + k), *(*(p2 + i) + j * 4 + k), (*(p3 + i))[j * 4 + k],p4[i][j][k]);
//			}
//		}
//	}
//  
//       
//	  return 0;
//  }
// #include <stdio.h>  
  
#include <stdio.h>
//
//int main() {
//    int a[3][4][5] = {
//        {
//            {1, 2, 3, 4, 5},
//            {6, 7, 8, 9, 10},
//            {11, 12, 13, 14, 15},
//            {16, 17, 18, 19, 20}
//        },
//        {
//            {21, 22, 23, 24, 25},
//            {26, 27, 28, 29, 30},
//            {31, 32, 33, 34, 35},
//            {36, 37, 38, 39, 40}
//        },
//        {
//            {41, 42, 43, 44, 45},
//            {46, 47, 48, 49, 50},
//            {51, 52, 53, 54, 55},
//            {56, 57, 58, 59, 60}
//        }
//    };
//    int* p1, ** p2, (*p3)[5], * p4[4];
//    int i, j, k;
//    for (i = 0; i < 3; i++) {
//        for (j = 0; j < 4; j++) {
//            for (k = 0; k < 5; k++) {
//                p1 = &a[i][j][k];
//                p2 = &p1;
//                p3 = &a[i][j];
//                p4[j] = a[i][j];
//                printf("%d %d %d %d\n", *p1, **p2, *(*p3 + k), *(p4[j] + k));
//            }
//        }
//    }
//    return 0;
//}
//int main(int argc,char *argv[])
//{//
//	printf("����ǰΪ hij efg abc\n");
//	
//
//	char temp[100] = { 0 };//������ʱ��������
//	for (int i = 1; i <argc-1; i++)
//	{
//		for (int j = 1; j <argc-1; j++)
//		{
//			if (strcmp(*(argv + j), *(argv +j+ 1)) > 0)//�ȽϺ󽻻�����С����
//		{
//			strcpy(temp, *(argv + j));
//			strcpy(*(argv + j), *(argv + 1 + j));
//			strcpy(*(argv + 1 + j), temp);
//		}
//
//		}
//		
//
//	}
//	printf("�����\n");//�������
//while (argc > 1)
//	{
//		++argv;
//		printf("%s\n", *argv);
//		--argc;
//	}
//	return 0;
//}
//int main()
//{
//    char* result = NULL;
//    size_t result_size = 1;  // ��ʼ��СΪ 1�������ɽ�β�Ŀ��ַ�
//    result = (char*)malloc(result_size * sizeof(char));
//    if (result == NULL) {
//        printf("�ڴ����ʧ��\n");
//        return 1;
//    }
//    result[0] = '\0';  // ���ַ���
//
//    char buffer[100];  // ���ڴ洢ÿ��������ַ���
//
//    while (1) {
//        printf("�������ַ�����ֱ�ӻس��������룩��");
//        if (fgets(buffer, 100, stdin) == NULL) {
//            break;
//        }
//        if (buffer[0] == '\n') {
//            break;
//        }
//        size_t length = strlen(buffer);
//        if (buffer[length - 1] == '\n') {
//          buffer[length - 1] = '\0';
//        }
//
//        // �������ַ����ĳ���
//        size_t new_length = strlen(buffer);
//        size_t current_length = strlen(result);
//
//        // ��̬���� result �Ĵ�С
//        result = (char*)realloc(result, (result_size + current_length + new_length) * sizeof(char));
//        if (result == NULL) {
//            printf("�ڴ����ʧ��\n");
//            return 1;
//        }
//
//        // �����ַ���ƴ�ӵ� result ����
//        strcat(result, buffer);
//    }
//
//    // ��ʾ���Ӻõ��ַ���
//    printf("���Ӻõ��ַ���Ϊ��%s\n", result);
//
//    // �ͷŶ�̬������ڴ�
//    free(result);
//
//	return 0;
//}
//int aa(char* a,char* word[])
//{
//    char b[20] = { 0 };
//	int flag = 1;
//    int i, in_word, word_num;
//    int j = 0;
//    int t=0;
//    word_num = 0; // ��ʼ�����ʸ���Ϊ0
//    in_word = 0; // ���λ������Ƿ��ڵ�����
//    for (i = 0; a[i]!='\0'; i++) {
//        if (a[i] == ' ') { // ��⵽�ո�
//            in_word = 0; // ���ñ��λΪ���ڵ�����
//        }
//         if (a[i] != ' ')
//        {
//            b[j++] = a[i];
//            if (a[i + 1] == ' ')
//            {
//                b[i + 1] = '\0';
//                strcpy(word[t++], b);
//                b[20] = 0;
//                j = 0;
//
//            }
//        }
//        else if (in_word == 0) { // �ڵ�����
//            word_num++; // ͳ�Ƶ��ʸ���
//            in_word = 1; // ���ñ��λΪ�ڵ�����
//        }
//       
//    }
//    return word_num;
//}
//int main()
//{
//    char* b[5];
//    char*a = "we are fa we as";
//    int sum =aa(a, b);
//    printf("%d", sum);
//    for (int i = 0; i < sum; i++)
//    {
//        printf("%s\n", b[i]);
//    }
//	return 0;
//}
//int SplitString(char* str, char* word[]) {
//    int i, j, count = 0;
//    j = 0;
//    char* str1 = (char*)malloc(sizeof(char));
//    for (; str[j] != '\0'; j++)
//    {
//        str1[j] = str[j];
//    }
//    str1[j] = '\0';
//    int len = strlen(str1);
//    for (i = 0; i < len; i++) {
//        if (isalpha(str1[i])) { // �������ĸ��˵���ǵ��ʵĿ�ͷ
//            word[count++] = &str1[i]; // ��¼���ʵ���ʼ��ַ
//            while (i < len && isalpha(str1[i])) i++; // �ҵ����ʵĽ�β
//            str1[i] = '\0'; // �ڽ�β������ַ���������
//        }
//    }
//    return count;
//}
//
//int main() {
//    char str[] = "This is a test string.";
//    char* word[10];
//    int count = SplitString(str, word);
//    printf("Count: %d\n", count);
//    for (int i = 0; i < count; i++) {
//        printf("Word %d: %s\n", i, word[i]);
//    }
//    return 0;

#include "stdio.h"
#include "stdlib.h"
#include"string.h"
#include"math.h"
#include<conio.h>
#include<windows.h>

 typedef struct node {
	char name[20];
	int data;
	struct node* next;
}NOD;
 
 NOD* getstrings(NOD* head)//����������
 {
	 NOD* p1, * p2;
	 int n = 0;
	 p1 = p2 = (NOD*)malloc(sizeof(NOD));//����ռ�
	 printf("��������������:");
	 
	 scanf("%d", &p1->data);
	 while (getchar() != '\n');//��ջ������Ļ��з�
	 fflush(stdin);//��ջ�����
	 printf("�������ַ�����:");
	 fgets(p1->name, sizeof(p1->name), stdin);//�����ַ���
	 p1->name[strlen(p1->name) - 1] = '\0';//���fgets���������������\n
	 head = NULL;
	 while(1)
	 {
		 if (p1->name[0]=='\n')//����ַ���Ϊ�գ�����������
		 {
			 printf("�����ַ���Ϊ�գ����һ�������������Ч\n");
			 break;
		 }
		 ++n;
		 if (n == 1)
		 {
			 head = p1;
		 }
		 else
		 {
			 p2->next = p1;
			 p2 = p1;
		 }
		 p1 = (NOD*)malloc(sizeof(NOD));
		 printf("��������������:");
		 scanf(" %d", &p1->data);
		 while (getchar() != '\n');//������뻺�����Ļ��з�
		 fflush(stdin);//������з�
		 printf("�������ַ�����:");
		 fgets(p1->name, sizeof(p1->name), stdin);
		 if (p1->name[0] !='\n')
		 {
			 p1->name[strlen(p1->name) - 1] = '\0';//���fgets���������������\n
		 }
		
		fflush(stdin);

	 }
	 p2->next = NULL;
	 return head;
}
 void printstring(NOD* head)//�������
 {
	 printf("������Ϊ\n");
	 NOD* p = head;
	 int n = 0;
	 while (p != NULL)
	 {
		 ++n;
		 printf("��%d���ڵ�������ǣ��ַ�����Ϊ%s  ��������Ϊ%d\n",n, p->name,p->data);
		 p = p->next;
	 }
 }
 int checkstring(NOD* head, char* str)//��ѯ����
 {
	 int sum = 0;
	 
	 NOD* p = head;
	 while (p != NULL)
	 {
		
		 if (strcmp(p->name, str) == 0)
		 {
			 sum++;
		 }
		 p = p->next;

	 }
	 return sum;
 }
 void savetofile(NOD* head, char* filename)//�ļ����溯��
 {
	 NOD* p;
	 if (head == NULL) {
		 printf("print nothing,data is NULL\n");
		 return;
	 }
	 FILE* fp;
	 fp = fopen(filename, "w");
	 if (fp == NULL) {
		 printf("error to write !");
		 return;
	 }
	 p = head;
	 do {
		 fprintf(fp,"%s %d\n", p->name,p->data);
		 p = p->next;
	 } while (p != NULL);
	 printf("save node datas to <%s>....Ok\n", filename);
	 fclose(fp);
 }
 NOD* AddNewNode(NOD* head, NOD* newNode)//������ݺ���
 {
	 NOD* p = head;
	 if (head == NULL) {
		 head = newNode;
		 newNode->next = NULL;
		 return head;
	 }
	 while (p->next != NULL) {
		 p = p->next;
	 }
	 p->next = newNode;
	 newNode->next = NULL;
	 return head;
 }
 NOD* getfromfile(NOD* head, char* filename)//�ļ���ȡ����
 {
	 NOD* p;
	 FILE* fp;
	 printf("Get data from file: %s...\n", filename);
	 fp = fopen(filename, "r");
	 if (fp == NULL) {
		 printf("Open file error!  can not find the file: %s\n\n", filename);
		 system("pause");
		 return head;
	 }
	 p = (NOD*)malloc(sizeof(NOD));
	 while (fscanf(fp, "%s %d\n",p->name,&p->data) != EOF) {
		 head = AddNewNode(head, p);
		 p = (NOD*)malloc(sizeof(NOD));
	 }
	 fclose(fp);
	 return head;

 }
 void displaymenu(int hilight)//�����˵�
 {
	 char menu[5][20] =
	 {
	 "[A] ��ʼ��Ϸ",
	 "[B] ��ʷ����",
	 "[C] ��Ϸ����",
	 "[D] �ؿ���ѯ",
	 "[E] ���ݲ�ѯ",
	 
	 

	 };
	 int i;
	 printf("\n=========�˵�============\n");
	 for (i = 0; i < 5; i++)
	 {
		 if (i == hilight - 1)
		 {
			 printf("<<%s>>\n", menu[i]);
		 }
		 else {
			 printf("%s\n", menu[i]);
		 }
	 }
	 printf("========================\n");
 }
 

 int main()
 {
	 char* filename = "C:\\Users\\zsm\\Desktop\\data.txt";
	 char str[20] = { 0 };
	 int sum = 0;
	 NOD* head = NULL;
	 char a;
	 char c = ' ';
	 int sel = 1;
	 //���̶�ȡ������
	 displaymenu(sel);//��ʾ�˵�
	 for (;;)
	 {
		 if (_kbhit())//�ж��Ƿ��а���
		 {
			 if (GetAsyncKeyState(VK_UP))//����
			 {
				 sel = (sel > 1) ? sel - 1 : sel;
				 system("cls");//����
				 displaymenu(sel);
			 }
			 if (GetAsyncKeyState(VK_DOWN))//����
			 {
				 sel = (sel < 5) ? sel + 1 : sel;
				 system("cls");
				 displaymenu(sel);

			 }
			 c = _getch();//��ȡ����ֵ
			 if (c <= 'z' && c >= 'a')
			 {
				 c = c - ('a' - 'A');
			 }
			 if (c <= 'E' && c >= 'A')
			 {
				 sel = c - 'A' + 1;
				 system("cls");
				 displaymenu(sel);
				 printf("command is [%c]\n", 'A' + sel - 1);


			 }
			 else if (c == '\r')
			 {
				 if (sel == 5)
				 {
					 return 0;
				 }
				 printf("command is[%c]\n", 'A' + sel - 1);
				 c = 'A' + sel - 1;
				 switch (c)//���ݰ���ִ������Ӧ�ĺ�������
				 {
				   case'A':
				  {
					  
					 head = getstrings(head);//��������������
					 break;
				  }
				   case 'B':
				  {
					   printstring(head);//��ӡ����
					   break;
				  }
				   case 'C':
				   {
					   printf("������Ҫ��ѯ���ַ���:");
					   
					   scanf("%s", str);//��ѯ�ַ���
					    sum = checkstring(head, str);//���ز�ѯ������ѯ�������ж��ٸ���ͬ�ַ���
						printf("��%d����ͬ�ַ���\n", sum);//���
						break;
				   }
				   case 'D':
				   {
					   savetofile(head, filename);//�����ļ����ݱ��溯��
					   break;
				   }
				   case 'E':
				   {
					   getfromfile(head, filename);//�����ļ���ȡ����
					   break;
				   }
				 }
			 }
			 else if (c == 'F')//�˳�����
			 {
				 return 0;
			 }
			 Sleep(100);//��ʱ100ms

		 }
	 }
	 return 0;
 }

























// #include <stdio.h>
//#include <stdlib.h>
//#include <string.h>
//#include<stdio.h>
//
//struct node {
//    char name[20];
//    int data;
//    struct node* next;
//};
//
//// ����������
//struct node* getstrings(struct node* head) {
//    struct node* p, * q;
//    p = head;
//    char str[20];
//    int num;
//    printf("�������ַ��������ݣ��Կո�ָ���������ַ���������\n");
//    while (scanf("%s", str )!=EOF && strcmp(str,"") != 0) 
//    {
//        scanf("%d", &num);
//        q = (struct node*)malloc(sizeof(struct node));
//        strcpy(q->name, str);
//        q->data = num;
//        p->next = q;
//        p = q;
//    }
//    p->next = NULL;
//    return head;
//}
//
//// ��ʾ����
//void printstring(struct node* head) {
//    struct node* p = head->next;
//    while (p != NULL) {
//        printf("%s %d\n", p->name, p->data);
//        p = p->next;
//    }
//}
//
//// ��ѯ����
//int checkstring(struct node* head, char* str) {
//    struct node* p = head->next;
//    while (p != NULL) {
//        if (strcmp(p->name, str) == 0) {
//            return p->data;
//        }
//        p = p->next;
//    }
//    return -1;
//}
//
//// �ļ����溯��
//void savetofile(struct node* head, char* filename) {
//    FILE* fp;
//    fp = fopen(filename, "w");
//    if (fp == NULL) {
//        printf("�ļ���ʧ�ܣ�\n");
//        return;
//    }
//    struct node* p = head->next;
//    while (p != NULL) {
//        fprintf(fp, "%s %d\n", p->name, p->data);
//        p = p->next;
//    }
//    fclose(fp);
//}
//
//// ���ļ�����������ݵĺ���
//struct node* getfromfile(struct node* head, char* filename) {
//    FILE* fp;
//    fp = fopen(filename, "r");
//    if (fp == NULL) {
//        printf("�ļ���ʧ�ܣ�\n");
//        return head;
//    }
//    struct node* p = head;
//    char str[20];
//    int num;
//    while (fscanf(fp, "%s %d", str, &num) != EOF) {
//        struct node* q = (struct node*)malloc(sizeof(struct node));
//        strcpy(q->name, str);
//        q->data = num;
//        p->next = q;
//        p = q;
//    }
//    p->next = NULL;
//    fclose(fp);
//    return head;
//}
//
//int main() {
//    struct node* head = (struct node*)malloc(sizeof(struct node));
//    head->next = NULL;
//    head = getstrings(head);
//    printf("�����е��ַ���������Ϊ��\n");
//    printstring(head);
//    char str[20];
//    printf("������Ҫ��ѯ���ַ�����\n");
//    scanf("%s", str);
//    int num = checkstring(head, str);
//    if (num == -1) {
//        printf("δ�ҵ����ַ�����\n");
//    }
//    else {
//        printf("���ַ�����Ӧ������Ϊ��%d\n", num);
//    }
//  /*  savetofile(head, "data.txt");
//    printf("�ѽ������е��ַ��������ݱ��浽�ļ�data.txt�У�\n");
//    head = getfromfile(head, "data.txt");
//    printf("�ѽ��ļ�data.txt�е��ַ�����������ӵ������У�\n");
//    printf("�����е��ַ���������Ϊ��\n");
//    printstring(head);*/
//    return 0;
//}