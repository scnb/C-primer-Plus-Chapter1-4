// 4-18.cpp : �������̨Ӧ�ó������ڵ㡣
//ʹ��new������̬���飬��ͨ��ָ����ʹ�ö�̬����

#include "stdafx.h"
#include <iostream>

int main()
{
	using namespace std;
	double * p3 = new double[3];
	p3[0] = 0.2;
	p3[1] = 0.5;
	p3[2] = 0.8;
	cout << "p3[1] is " << p3[1] << endl;
	p3 = p3 + 1;
	cout << "Now p3[0] is " << p3[0] << endl;
	cout << "p3[1] is " << p3[1] << endl;
	p3 = p3 - 1;
	delete [] p3;
	getchar();
    return 0;
}

