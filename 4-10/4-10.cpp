// 4-10.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <cstring>
int main()
{
	using namespace std;
	char charr[20];
	string str;
	cout << "Length of string in charr before input:" << strlen(charr) << endl;
	cout << "Length of string in str before input:" << str.size() << endl;
	cout << "Enter a line of text:\n";
	cin.getline(charr, 20);//20表示最大能接收的字符个数
	cout << "you entered: " << charr << endl;
	cout << "Enter another line of text:\n";
	getline(cin, str);//cin在这里作为参数,表示getline函数从cin中寻找输入的数据,在这里不能使用cin.getline(str,20)是因为istream类中没有处理string对象的方法
	//cin >> str;//这样也是可以的
	//cin.getline(str, 20);//这样是错误的，编译出错，因为istream类中没有处理string对象的方法
	cout << "you entered: " << str << endl;
	cout << "Length of string in charr after input: " << strlen(charr) << endl;
	cout << "Length of string in str after input: " << str.size() << endl;
	cout << R"(Jim "King" Tutt uses "\n" instead of endl.)" << endl;//一个测验，C++中输出原始字符串
	getchar();
    return 0;
}

