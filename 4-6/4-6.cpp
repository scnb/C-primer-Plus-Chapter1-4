// 4-6.cpp : �������̨Ӧ�ó������ڵ㡣
//��������ַ���������

#include "stdafx.h"
#include <iostream>

int main()
{
	using namespace std;
	cout << "What year was your house built?\n";
	int year;
	cin >> year;
	cin.get();
	cout << "What is the street address?";
	cout << endl;
	char address[80];
	cin.getline(address, 80);
	cout << "Year built: " << year << endl;
	cout << "Street address: " << address << endl;
	cout << "Done!" << endl;
	getchar();
    return 0;
}

