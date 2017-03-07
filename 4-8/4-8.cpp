// 4-8.cpp : 定义控制台应用程序的入口点。
//将C风格和string对象赋给string对象
//string对象的运算（追加到某一个字符串末尾）

#include "stdafx.h"
#include <iostream>
#include <string>

int main()
{
	using namespace std;
	string s1 = "penguin";
	string s2, s3;
	cout << "You can assign one string object to another:s2 = s1\n";
	s2 = s1;
	cout << "s1 = " << s1 << " , s2 = " << s2 << " ." << endl;
	cout << "You can assign C-style string to a string object.\n";
	cout << "s2 = \"buzzard\"\n";
	s2 = "buzzard";
	cout << "s2 : " << s2 << endl;
	cout << "You can concatenate strings : s3 = s2 + s1\n";
	s3 = s2 + s1;
	cout << "s3 = " << s3 << endl;
	cout << "You can append strings.\n";
	s1 += s2;
	cout << "s1 += s2 yields s1 = " << s1 << endl;
	s2 += " for a day";
	cout << "s2 += \" for a day\" yields s2 = "<<s2<<endl;
	getchar();
    return 0;
}

