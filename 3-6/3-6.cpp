// 3-6.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>

int main()
{
	using namespace std;
	char ch = 'M';
	int i = ch;
	cout << "The ASCII code for " << ch << " is " << i << endl;
	cout << "Add one to the character code:" << endl;
	ch = ch + 1;
	i = ch;
	cout << "The ASCII code for " << ch << " is " << i << endl;
	cout << "Displaying char ch using cout.put(ch):" << endl;
	cout.put(ch);
	//使用cout.put()函数来输出一个字符常量
	cout.put('!');
	cout << endl << "Done!" << endl;
	getchar();
    return 0;
}

