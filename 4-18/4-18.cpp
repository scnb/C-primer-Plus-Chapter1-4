// 4-18.cpp : 定义控制台应用程序的入口点。
//使用new创建动态数组，并通过指针来使用动态数组

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

