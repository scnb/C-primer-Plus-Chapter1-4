// 3-3.cpp : 定义控制台应用程序的入口点。
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
	cout << "Waist = " << waist << " {0x42 in hex}\n";//cout默认以十进制形式输出整数
	cout << "Inseam = " << inseam << " {042 in octal}\n";
	getchar();
    return 0;
}

