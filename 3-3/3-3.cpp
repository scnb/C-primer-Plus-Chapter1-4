// 3-3.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>

int main()
{
	using namespace std;
	int chest = 42;
	int waist = 0x42;
	int inseam = 042;
	cout << "Chest = " << chest << " {42 in decimal}\n";
	cout << "Waist = " << waist << " {0x42 in hex}\n";//coutĬ����ʮ������ʽ�������
	cout << "Inseam = " << inseam << " {042 in octal}\n";
	getchar();
    return 0;
}

