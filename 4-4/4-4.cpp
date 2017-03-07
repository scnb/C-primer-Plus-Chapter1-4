// 4-3.cpp : 定义控制台应用程序的入口点。
//使用cin.getline()来代替cin，进行面向行的输入读取

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

