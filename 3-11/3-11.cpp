// 3-11.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>

int main()
{
	using namespace std;
	cout.setf(ios_base::fixed, ios_base::floatfield);
	cout << "Integer division: 9/5 = " << 9 / 5 << endl;
	cout << "Floating-Point division 9.0/5.0 = " << 9.0 / 5.0 << endl;
	cout << "Mixed division 9.0/5 = " << 9.0 / 5 << endl;
	cout << "Double constants 1e7/9.0 = " << 1.e7 / 9.0 << endl;//1e7������ʽĬ��Ϊdouble����
	cout << "Float constants 1e7f/9.0f = " << 1e7f / 9.0f << endl;
	getchar();
    return 0;
}

