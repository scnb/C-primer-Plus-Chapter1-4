// 4-3.cpp : �������̨Ӧ�ó������ڵ㡣
//ʹ��cin.getline()������cin�����������е������ȡ

#include "stdafx.h"
#include <iostream>

int main()
{
	using namespace std;
	const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];
	cout << "Enter your name: ";
	cin.getline(name, ArSize);
	cout << endl;
	cout << "Enter your favorite dessert: ";
	cin.getline(dessert, ArSize);
	cout << endl;
	cout << "I have some declious " << dessert << " for you, " << name << endl;
	getchar();
	return 0;
}

