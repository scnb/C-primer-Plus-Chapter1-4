// 4-10.cpp : �������̨Ӧ�ó������ڵ㡣
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
	cin.getline(charr, 20);//20��ʾ����ܽ��յ��ַ�����
	cout << "you entered: " << charr << endl;
	cout << "Enter another line of text:\n";
	getline(cin, str);//cin��������Ϊ����,��ʾgetline������cin��Ѱ�����������,�����ﲻ��ʹ��cin.getline(str,20)����Ϊistream����û�д���string����ķ���
	//cin >> str;//����Ҳ�ǿ��Ե�
	//cin.getline(str, 20);//�����Ǵ���ģ����������Ϊistream����û�д���string����ķ���
	cout << "you entered: " << str << endl;
	cout << "Length of string in charr after input: " << strlen(charr) << endl;
	cout << "Length of string in str after input: " << str.size() << endl;
	cout << R"(Jim "King" Tutt uses "\n" instead of endl.)" << endl;//һ�����飬C++�����ԭʼ�ַ���
	getchar();
    return 0;
}

