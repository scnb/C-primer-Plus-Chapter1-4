// 4-19.cpp : �������̨Ӧ�ó������ڵ㡣
//ָ������

#include "stdafx.h"
#include <iostream>

int main()
{
	using namespace std;
	double wages[3] = { 10000.0,20000.0,30000.0 };
	short stacks[3] = { 3,2,1 };
	//�õ������ַ�����ַ���
	double * pw = wages;
	short * ps = &stacks[0];
	cout << wages << endl;
	cout << &wages << endl;
	cout << "pw = " << pw << ", *pw = " << *pw << endl;
	pw = pw + 1;
	cout << "Add 1 to the pw pointer:\n";
	cout << "pw = " << pw << ", *pw = " << *pw << endl;
	cout << endl;
	cout << "ps = " << ps << ", *ps = " << *ps << endl;
	ps = ps + 1;
	cout << "Add 1 to the ps pointer:\n";
	cout << "ps = " << ps << ", *ps = " << *ps << endl;
	cout << endl;
	//������ķŷ�ȡ�����������ֵ
	cout << "stacks[0] = " << stacks[0] << ", stacks[1] = " << stacks[1] << endl;
	//��ָ��ķ���ȡ������ֵ
	cout << "*stacks = " << *stacks << ", *(stacks+1) = " << *(stacks + 1) << endl;
	cout << sizeof(wages) << " = size of wages array\n";
	cout << sizeof(pw) << " = size of pw pointer\n";
	getchar();
    return 0;
}

