// 3-13.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>

int main()
{
	using namespace std;
	cout.setf(ios_base::fixed, ios_base::floatfield);
	float tree = 3;
	int guess = 3.9832;//��doubleת��Ϊint
	int debt = 7.2e12;//��doubleת��Ϊint
	cout << tree << endl;
	cout << guess << endl;
	cout << debt << endl;
	getchar();
    return 0;
}

