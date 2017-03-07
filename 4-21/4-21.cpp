// 4-21.cpp : 定义控制台应用程序的入口点。
//使用new创建动态结构

#include "stdafx.h"
#include <iostream>
struct inflatable
{
	char name[20];
	float volume;
	double price;
};

int main()
{
	using namespace std;
	inflatable * ps = new inflatable;
	cout << "Enter name of inflatable term: ";
	cin.get(ps->name, 20);
	cout << "Enter volume in cubic feet: ";
	cin >> (*ps).volume;
	cout << "Enter price $: ";
	cin >> ps->price;
	cout << "name: " << (*ps).name << endl;
	cout << "volume = " << ps->volume << endl;
	cout << "price = " << ps->price << endl;
	delete ps;
	getchar();
	getchar();
    return 0;
}

