// 3-14.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>

int main()
{
	using namespace std;
	int auks, bats, coots;
	auks = 19.99 + 11.99;//先按照double类型进行加法操作，然后转换成int型  double类型等于31.98
	bats = (int)19.99 + (int)11.99;//按照int类型进行加法操作
	coots = int(19.99) + int(11.99);//用C++的风格进行加法操作；
	cout << "auks = " << auks << " bats = " << bats << " coots = " << coots << endl;
	char ch = 'Z';
	char a = 88;
	int b = 88;
	//auto crat = U'/U00002155';//U表示为unicode类型字符串  貌似vs2015识别不了
	auto fract = 8.25f / 2.5;
	cout << fract << endl;
	cout << char(b) << endl;
	cout << a << endl;
	cout << ch << endl;
	cout << int(ch) << endl;//使用强制转换来输出字符对应的ascii码	
	cout << static_cast<int>(ch) << endl;
	getchar();
    return 0;
}

