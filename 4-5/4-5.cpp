// 4-3.cpp : 定义控制台应用程序的入口点。
//使用cin.get()来代替cin，进行面向行的输入读取，但是该函数会把换行符保留在输入队列中

#include "stdafx.h"
#include <iostream>

int main()
{
	using namespace std;
	const int ArSize = 20;
	char name[ArSize];
	char dessert[ArSize];
	cout << "Enter your name: ";
	cin.get(name, ArSize).get();//增加一个get()函数来吸收enter键
	//cin.clear();该函数的作用是当上一条语句的输入超过数组的长度时，get函数会设置失效位，导致后面不能在输入流中读取
	cout << endl;
	cout << "Enter your favorite dessert: ";
	cin.get(dessert, ArSize).get();//增加一个get()函数来吸收enter键
	cout << endl;
	cout << "I have some declious " << dessert << " for you, " << name << endl;
	//getchar();
	cin.get();//功能与上一条语句一样
	return 0;
}

