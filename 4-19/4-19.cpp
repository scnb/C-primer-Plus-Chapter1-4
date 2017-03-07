// 4-19.cpp : 定义控制台应用程序的入口点。
//指针算术

#include "stdafx.h"
#include <iostream>

int main()
{
	using namespace std;
	double wages[3] = { 10000.0,20000.0,30000.0 };
	short stacks[3] = { 3,2,1 };
	//得到数组地址的两种方法
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
	//用数组的放法取得数组的两个值
	cout << "stacks[0] = " << stacks[0] << ", stacks[1] = " << stacks[1] << endl;
	//用指针的方法取得两个值
	cout << "*stacks = " << *stacks << ", *(stacks+1) = " << *(stacks + 1) << endl;
	cout << sizeof(wages) << " = size of wages array\n";
	cout << sizeof(pw) << " = size of pw pointer\n";
	getchar();
    return 0;
}

