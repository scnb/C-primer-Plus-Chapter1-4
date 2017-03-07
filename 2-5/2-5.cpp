// 2-5.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

void simon(int);//函数原型

int main()
{
	using namespace std;
	simon(3);
	cout << "Pick an integer: ";
	int count;
	cin >> count;
	simon(count);
	cout << "Done! " << endl;
	cin.get();
	cin.get();
    return 0;
}

void simon(int n)//函数头
{
	using namespace std;
	cout << "Simon says touch your toes " << n << " times." << endl;
}

