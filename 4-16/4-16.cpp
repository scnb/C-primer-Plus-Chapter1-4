// 4-16.cpp : �������̨Ӧ�ó������ڵ㡣
//��ν�ָ���ʼ��Ϊһ����ַ

#include "stdafx.h"
#include <iostream>

int main()
{
	using namespace std;
	int higgens = 5;
	int * pt = &higgens;
	cout << "Value of higgens = " << higgens
		<< "; Address of higgens = " << &higgens << endl;
	cout << "Value of *pt = " << *pt
		<< ";Value of pt = " << pt << endl;
	getchar();

    return 0;
}

