// 4-3.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>

int main()
{
	using namespace std;
	const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];
	cout << "Enter your name: ";
	cin >> name;
	cout << endl;
	cout << "Enter your favorite dessert: ";
	cin >> dessert;
	cout << endl;
	cout << "I have some declious " << dessert << " for you, " << name << endl;
	getchar();
	getchar();
    return 0;
}

