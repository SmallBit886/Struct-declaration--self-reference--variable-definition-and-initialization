#define _CRT_SECURE_NO_WARNINGS 1
//�Զ������ͣ��ṹ�壬ö�٣�����
#include <stdio.h>
#include <assert.h>

//����һ���ṹ������
//����һ��ѧ�����ͣ�����ͨ��ѧ�����ͣ�����ѧ������������
//struct Stu
//{
//	char name[20];//����
//	int age;//����
//	char sex[5];//�Ա�
//	char id[20];//ѧ��
//}s4,s5,s6; //�ֺŲ��ܶ�
//
//struct Stu s3;//ȫ�ֱ��� --- s3,s4,s5,s6
//
//int main()
//{
//	//�����ṹ�����
//	//�ֲ�����  --- s1,s2
//	struct Stu s1;
//	struct Stu s2;
//
//	return 0;
//}

//1.4 �ṹ�������� ---- ����
//�ڽṹ�а���һ������Ϊ�ýṹ����ĳ�Ա�Ƿ�����أ� ---  ������
//struct Note
//{
//	//������
//	int date;//4�ֽ�
//
//	//ָ����
//	//struct Note Next;//������ error
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
////���������
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


//1.5 �ṹ������Ķ���ͳ�ʼ��
//struct Point
//{
//	int x;
//	int y;
//}p1; //�������͵�ͬʱ�������p1
//struct Point p2; //����ṹ�����p2
////��ʼ�������������ͬʱ����ֵ��
//struct Point p3 = { 1, 2 };
//
//
//struct Stu //��������
//{
//	char name[15];//����
//	int age; //����
//};
//struct Stu s = { "zhangsan", 20 };//��ʼ��
//
//struct Node
//{
//	int data;
//	struct Point p;
//	struct Node* next;
//}n1 = { 10, {4,5}, NULL }; //�ṹ��Ƕ�׳�ʼ��
//
//struct Node n2 = { 20, {5, 6}, NULL };//�ṹ��Ƕ�׳�ʼ��
//
//int main()
//{
//	//�ṹ��Ƕ�׵ķ���
//	printf("%d\n", n2.p.y);//6
//	return 0;
//}

