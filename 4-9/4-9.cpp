// 4-9.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cstring>


int main()
{
	using namespace std;
	char charr1[20];
	char charr2[20] = "jaguar";
	string str1;
	string str2 = "panther";
	//��ֱ�ӽ�string�����Ƹ���һ��string���������strcpy������C����ַ������Ƹ�C����ַ���
	str1 = str2;
	strcpy_s(charr1,charr2);//��str2�е��ַ������Ƶ�str1��
	//�ٽ�C����ַ���׷�ӵ�string������������strcat������C����ַ���׷�ӵ�C����ַ�������
	str1 += " paste";
	strcat_s(charr1, " juice");
	//������.����������string����ĳ��Ȣ���strlen����������C����ַ����ĳ���
	int len1 = str1.size();
	int len2 = strlen(charr1);
	cout << "The string " << str1 << " contains " << len1 << " characters." << endl;
	cout << "The string " << charr1 << " contains " << len2 << " characters." << endl;
	getchar();
    return 0;
}

