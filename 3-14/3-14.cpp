// 3-14.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>

int main()
{
	using namespace std;
	int auks, bats, coots;
	auks = 19.99 + 11.99;//�Ȱ���double���ͽ��мӷ�������Ȼ��ת����int��  double���͵���31.98
	bats = (int)19.99 + (int)11.99;//����int���ͽ��мӷ�����
	coots = int(19.99) + int(11.99);//��C++�ķ����мӷ�������
	cout << "auks = " << auks << " bats = " << bats << " coots = " << coots << endl;
	char ch = 'Z';
	char a = 88;
	int b = 88;
	//auto crat = U'/U00002155';//U��ʾΪunicode�����ַ���  ò��vs2015ʶ����
	auto fract = 8.25f / 2.5;
	cout << fract << endl;
	cout << char(b) << endl;
	cout << a << endl;
	cout << ch << endl;
	cout << int(ch) << endl;//ʹ��ǿ��ת��������ַ���Ӧ��ascii��	
	cout << static_cast<int>(ch) << endl;
	getchar();
    return 0;
}

