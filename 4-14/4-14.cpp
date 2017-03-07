// 4-14.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

int main()
{
	using namespace std;
	int donuts = 6;
	double cups = 4.5;
	cout << "donuts value = " << donuts << " and donuts address = " << &donuts << endl;
	cout << sizeof(int) << endl;
	cout << "cups value = " << cups << " and cups address = " << &cups << endl;
	getchar();
    return 0;
}

