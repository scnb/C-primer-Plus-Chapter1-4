// 3-13.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

int main()
{
	using namespace std;
	cout.setf(ios_base::fixed, ios_base::floatfield);
	float tree = 3;
	int guess = 3.9832;//将double转换为int
	int debt = 7.2e12;//将double转换为int
	cout << tree << endl;
	cout << guess << endl;
	cout << debt << endl;
	getchar();
    return 0;
}

