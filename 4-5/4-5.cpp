// 4-3.cpp : �������̨Ӧ�ó������ڵ㡣
//ʹ��cin.get()������cin�����������е������ȡ�����Ǹú�����ѻ��з����������������

#include "stdafx.h"
#include <iostream>

int main()
{
	using namespace std;
	const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];
	cout << "Enter your name: ";
	cin.get(name, ArSize).get();//����һ��get()����������enter��
	//cin.clear();�ú����������ǵ���һ���������볬������ĳ���ʱ��get����������ʧЧλ�����º��治�����������ж�ȡ
	cout << endl;
	cout << "Enter your favorite dessert: ";
	cin.get(dessert, ArSize).get();//����һ��get()����������enter��
	cout << endl;
	cout << "I have some declious " << dessert << " for you, " << name << endl;
	//getchar();
	cin.get();//��������һ�����һ��
	return 0;
}

