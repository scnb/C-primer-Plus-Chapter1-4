// 3-7.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>

int main()
{
	using namespace std;
	cout << "\aOperation \"HyperHype\" is now activated!\n";//其中\a表示系统振铃
	cout << "\aEnter your agent code ：_______\b\b\b\b\b\b\b";
	long code;
	cin >> code;
	cout << "\aYou entered " << code << "···\n";
	cout << "\aCode verified! Proceed with plan Z3!\n";
	getchar();
	getchar();
    return 0;
}

