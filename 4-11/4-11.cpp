// 4-11.cpp : �������̨Ӧ�ó������ڵ㡣
//c++�ṹ���÷�

#include "stdafx.h"
#include<iostream>

struct inflatable
{
	char name[20];
	float volume;//����
	double price;//����
};

int main()
{
	using namespace std;
	inflatable guest = 
	{
		"Glorious Gloria",
		1.88,
		29.99
	};
	inflatable pal =
	{
		"Audacious Arthur",
	3.12,
	32.99
	};
	cout << "Expand your guest list with " << guest.name;
	cout << " and " << pal.name << endl;
	cout << "You can have both for $ " << guest.price + pal.price << endl;
	getchar();
    return 0;
}

