// 3-9.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>

int main()
{
	using namespace std;
	cout.setf(ios_base::fixed, ios_base::floatfield);
	float a = 2.34e+22f;
	float b = a + 1.0f;
	cout << "a = " << a << endl;
	cout << "b-a = " << b - a << endl;
	getchar();
    return 0;
}

