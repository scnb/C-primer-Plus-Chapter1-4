// 4-16.cpp : 定义控制台应用程序的入口点。
//如何将指针初始化为一个地址

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

