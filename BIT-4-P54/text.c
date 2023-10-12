#define _CRT_SECURE_NO_WARNINGS 1
//自定义类型：结构体，枚举，联合
#include <stdio.h>
#include <assert.h>

//声明一个结构体类型
//声明一个学生类型，是想通过学生类型，创建学生变量（对象）
//struct Stu
//{
//	char name[20];//名字
//	int age;//年龄
//	char sex[5];//性别
//	char id[20];//学号
//}s4,s5,s6; //分号不能丢
//
//struct Stu s3;//全局变量 --- s3,s4,s5,s6
//
//int main()
//{
//	//创建结构体变量
//	//局部变量  --- s1,s2
//	struct Stu s1;
//	struct Stu s2;
//
//	return 0;
//}

//1.4 结构的自引用 ---- 链表
//在结构中包含一个类型为该结构本身的成员是否可以呢？ ---  不可以
//struct Note
//{
//	//数据域
//	int date;//4字节
//
//	//指针域
//	//struct Note Next;//无限套 error
//	struct Note* Next;//8
//};
//
//int main()
//{
//	int ret = sizeof(struct Note);
//	printf("%d\n",ret);//16
//	return 0;
//}

/********************* typedef **************************/
//typedef struct 
//{
//	int data;
//	Node* next;
//}Node;
//error
//
//
////解决方案：
//typedef struct Node
//{
//	int data;
//	struct Node* next;
//}Node;
//
//int main()
//{
//	struct Node n1;
//	Node n2;
//	
//	return 0;
//}


//1.5 结构体变量的定义和初始化
//struct Point
//{
//	int x;
//	int y;
//}p1; //声明类型的同时定义变量p1
//struct Point p2; //定义结构体变量p2
////初始化：定义变量的同时赋初值。
//struct Point p3 = { 1, 2 };
//
//
//struct Stu //类型声明
//{
//	char name[15];//名字
//	int age; //年龄
//};
//struct Stu s = { "zhangsan", 20 };//初始化
//
//struct Node
//{
//	int data;
//	struct Point p;
//	struct Node* next;
//}n1 = { 10, {4,5}, NULL }; //结构体嵌套初始化
//
//struct Node n2 = { 20, {5, 6}, NULL };//结构体嵌套初始化
//
//int main()
//{
//	//结构体嵌套的访问
//	printf("%d\n", n2.p.y);//6
//	return 0;
//}

