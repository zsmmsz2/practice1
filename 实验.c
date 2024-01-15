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
//	int temp = 0;//定义临时变量
//	for (; i < n - 1; i++)//进行气泡排序
//	{
//		for (int j = 0; j < n - i - 1; j++)
//		{
//			if (*(a + j) > *(a + j + 1))//进行值交换
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
//	int a[6] = { 2,4,1,3,6,5 };//定义一个乱序数组
//	Com(a, 6);//调用函数
//	int* p = a;//定义指针指向数组a
//	printf("调用排序函数\n");
//	for (; p < a + 6; p++)//利用指针进行输出
//	{
//		printf("%d", *p);
//	}
//	return 0;
//}
//char* CopyEnd(char* p, int n)//定义返回值为指针的函数
//{
//	int t = strlen(p);//计算长度
//	char q[100] = { 0 };
//	for (int i = t - n ,j=0; i < t; i++,j++)
//	{
//		q[j] = *(p + i);//将n后面的字符传给q
//
//	}
//	return q;//返回q
//	
//
//}
//int main()
//{
//	char* b;//定义字符指针数组
//	char a[] = "1234567890";
//	b=CopyEnd(a, 4);//传递指针给b
//	printf("%s", b);//输出
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
//{     //数据范围为1至24
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
//	printf("排序前为 hij efg abc\n");
//	
//
//	char temp[100] = { 0 };//定义临时交换数组
//	for (int i = 1; i <argc-1; i++)
//	{
//		for (int j = 1; j <argc-1; j++)
//		{
//			if (strcmp(*(argv + j), *(argv +j+ 1)) > 0)//比较后交换，由小到大
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
//	printf("排序后：\n");//重新输出
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
//    size_t result_size = 1;  // 初始大小为 1，以容纳结尾的空字符
//    result = (char*)malloc(result_size * sizeof(char));
//    if (result == NULL) {
//        printf("内存分配失败\n");
//        return 1;
//    }
//    result[0] = '\0';  // 空字符串
//
//    char buffer[100];  // 用于存储每次输入的字符串
//
//    while (1) {
//        printf("请输入字符串（直接回车结束输入）：");
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
//        // 计算新字符串的长度
//        size_t new_length = strlen(buffer);
//        size_t current_length = strlen(result);
//
//        // 动态调整 result 的大小
//        result = (char*)realloc(result, (result_size + current_length + new_length) * sizeof(char));
//        if (result == NULL) {
//            printf("内存分配失败\n");
//            return 1;
//        }
//
//        // 将新字符串拼接到 result 后面
//        strcat(result, buffer);
//    }
//
//    // 显示连接好的字符串
//    printf("连接好的字符串为：%s\n", result);
//
//    // 释放动态分配的内存
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
//    word_num = 0; // 初始化单词个数为0
//    in_word = 0; // 标记位，标记是否在单词内
//    for (i = 0; a[i]!='\0'; i++) {
//        if (a[i] == ' ') { // 检测到空格
//            in_word = 0; // 设置标记位为不在单词内
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
//        else if (in_word == 0) { // 在单词内
//            word_num++; // 统计单词个数
//            in_word = 1; // 设置标记位为在单词内
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
//        if (isalpha(str1[i])) { // 如果是字母，说明是单词的开头
//            word[count++] = &str1[i]; // 记录单词的起始地址
//            while (i < len && isalpha(str1[i])) i++; // 找到单词的结尾
//            str1[i] = '\0'; // 在结尾处添加字符串结束符
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
 
 NOD* getstrings(NOD* head)//链表构建函数
 {
	 NOD* p1, * p2;
	 int n = 0;
	 p1 = p2 = (NOD*)malloc(sizeof(NOD));//分配空间
	 printf("请输入数字数据:");
	 
	 scanf("%d", &p1->data);
	 while (getchar() != '\n');//清空缓冲区的换行符
	 fflush(stdin);//清空缓存区
	 printf("请输入字符数据:");
	 fgets(p1->name, sizeof(p1->name), stdin);//输入字符串
	 p1->name[strlen(p1->name) - 1] = '\0';//清除fgets函数输入后所带的\n
	 head = NULL;
	 while(1)
	 {
		 if (p1->name[0]=='\n')//如果字符串为空，结束链表创建
		 {
			 printf("由于字符串为空，最后一次输入的数据无效\n");
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
		 printf("请输入数字数据:");
		 scanf(" %d", &p1->data);
		 while (getchar() != '\n');//清除输入缓冲区的换行符
		 fflush(stdin);//清除换行符
		 printf("请输入字符数据:");
		 fgets(p1->name, sizeof(p1->name), stdin);
		 if (p1->name[0] !='\n')
		 {
			 p1->name[strlen(p1->name) - 1] = '\0';//清除fgets函数输入后所带的\n
		 }
		
		fflush(stdin);

	 }
	 p2->next = NULL;
	 return head;
}
 void printstring(NOD* head)//输出函数
 {
	 printf("输出结果为\n");
	 NOD* p = head;
	 int n = 0;
	 while (p != NULL)
	 {
		 ++n;
		 printf("第%d个节点的数据是：字符数据为%s  数字数据为%d\n",n, p->name,p->data);
		 p = p->next;
	 }
 }
 int checkstring(NOD* head, char* str)//查询函数
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
 void savetofile(NOD* head, char* filename)//文件保存函数
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
 NOD* AddNewNode(NOD* head, NOD* newNode)//添加数据函数
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
 NOD* getfromfile(NOD* head, char* filename)//文件读取函数
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
 void displaymenu(int hilight)//构建菜单
 {
	 char menu[5][20] =
	 {
	 "[A] 开始游戏",
	 "[B] 历史排名",
	 "[C] 游戏帮助",
	 "[D] 关卡查询",
	 "[E] 数据查询",
	 
	 

	 };
	 int i;
	 printf("\n=========菜单============\n");
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
	 //键盘读取操作数
	 displaymenu(sel);//显示菜单
	 for (;;)
	 {
		 if (_kbhit())//判断是否有按键
		 {
			 if (GetAsyncKeyState(VK_UP))//向上
			 {
				 sel = (sel > 1) ? sel - 1 : sel;
				 system("cls");//清屏
				 displaymenu(sel);
			 }
			 if (GetAsyncKeyState(VK_DOWN))//向下
			 {
				 sel = (sel < 5) ? sel + 1 : sel;
				 system("cls");
				 displaymenu(sel);

			 }
			 c = _getch();//读取按键值
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
				 switch (c)//根据按键执行所对应的函数功能
				 {
				   case'A':
				  {
					  
					 head = getstrings(head);//调用链表构建函数
					 break;
				  }
				   case 'B':
				  {
					   printstring(head);//打印链表
					   break;
				  }
				   case 'C':
				   {
					   printf("请输入要查询的字符串:");
					   
					   scanf("%s", str);//查询字符串
					    sum = checkstring(head, str);//返回查询函数查询链表中有多少个相同字符串
						printf("有%d个相同字符串\n", sum);//输出
						break;
				   }
				   case 'D':
				   {
					   savetofile(head, filename);//调用文件数据保存函数
					   break;
				   }
				   case 'E':
				   {
					   getfromfile(head, filename);//调用文件读取函数
					   break;
				   }
				 }
			 }
			 else if (c == 'F')//退出程序
			 {
				 return 0;
			 }
			 Sleep(100);//延时100ms

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
//// 链表构建函数
//struct node* getstrings(struct node* head) {
//    struct node* p, * q;
//    p = head;
//    char str[20];
//    int num;
//    printf("请输入字符串和数据，以空格分隔，输入空字符串结束：\n");
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
//// 显示函数
//void printstring(struct node* head) {
//    struct node* p = head->next;
//    while (p != NULL) {
//        printf("%s %d\n", p->name, p->data);
//        p = p->next;
//    }
//}
//
//// 查询函数
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
//// 文件保存函数
//void savetofile(struct node* head, char* filename) {
//    FILE* fp;
//    fp = fopen(filename, "w");
//    if (fp == NULL) {
//        printf("文件打开失败！\n");
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
//// 读文件添加链表数据的函数
//struct node* getfromfile(struct node* head, char* filename) {
//    FILE* fp;
//    fp = fopen(filename, "r");
//    if (fp == NULL) {
//        printf("文件打开失败！\n");
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
//    printf("链表中的字符串和数据为：\n");
//    printstring(head);
//    char str[20];
//    printf("请输入要查询的字符串：\n");
//    scanf("%s", str);
//    int num = checkstring(head, str);
//    if (num == -1) {
//        printf("未找到该字符串！\n");
//    }
//    else {
//        printf("该字符串对应的数据为：%d\n", num);
//    }
//  /*  savetofile(head, "data.txt");
//    printf("已将链表中的字符串和数据保存到文件data.txt中！\n");
//    head = getfromfile(head, "data.txt");
//    printf("已将文件data.txt中的字符串和数据添加到链表中！\n");
//    printf("链表中的字符串和数据为：\n");
//    printstring(head);*/
//    return 0;
//}