// 4-17.cpp : �������̨Ӧ�ó������ڵ㡣
//ʹ��new�ڳ��������з����ڴ�

#include "stdafx.h"
#include <iostream>

int main()
{
	using namespace std;
	int nights = 1001;
	int * pt = new int;
	*pt = 1001;
	cout << "nights value = " << nights << " : location = " << &nights << endl;
	cout << "int";
	cout << " value = " << *pt << " : location = " << pt << endl;
	double * pd = new double;
	*pd = 10000001.0;
	cout << "doubel ";
	cout << "value = " << *pd << " : location = " << pd << endl;
	cout << "location of pointer pd : " << &pd << endl;
	cout << "size of pt: " << sizeof(pt) << endl;
	cout << "size of *pt: " << sizeof(*pt) << endl;
	cout << "size of pd: " << sizeof(pd) << endl;
	cout << "size of *pd: " << sizeof(*pd) << endl;
	getchar();
	return 0;
}

