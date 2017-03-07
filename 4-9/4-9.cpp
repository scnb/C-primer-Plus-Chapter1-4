// 4-9.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cstring>


int main()
{
	using namespace std;
	char charr1[20];
	char charr2[20] = "jaguar";
	string str1;
	string str2 = "panther";
	//①直接将string对象复制给另一个string对象②利用strcpy函数将C风格字符串复制给C风格字符串
	str1 = str2;
	strcpy_s(charr1,charr2);//将str2中的字符串复制到str1中
	//①将C风格字符串追加到string对象后面②利用strcat函数将C风格字符串追加到C风格字符串后面
	str1 += " paste";
	strcat_s(charr1, " juice");
	//①用类.方法来计算string对象的长度②用strlen函数来计算C风格字符串的长度
	int len1 = str1.size();
	int len2 = strlen(charr1);
	cout << "The string " << str1 << " contains " << len1 << " characters." << endl;
	cout << "The string " << charr1 << " contains " << len2 << " characters." << endl;
	getchar();
    return 0;
}

