// 3-1.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
#include<climits>   //��ͷ�ļ��а����˶��������ͳ��ȵ�����

int main()
{
	using namespace std;
	int n_int = INT_MAX;//INT_MAX�Ƕ�����climits�ļ��е�һ������
	short n_short = SHRT_MAX;//ͬ��
	long n_long = LONG_MAX;
	long long n_llong = LLONG_MAX;

	//��sizeof��������ȡ�������͵Ĵ�С

	cout << "int is " << sizeof(int) << " bytes." << endl;
	cout << "short is " << sizeof(n_short) << " bytes." << endl;
	cout << "long is " << sizeof(long) << " bytes." << endl;
	cout << "long long is " << sizeof(n_llong) << " bytes." << endl;
	cout << endl;

	//������������������ܱ�ʾ�����ֵ����Сֵ

	cout << "Maximum value:" << endl;
	cout << "int:" << n_int << endl;
	cout << "short:" << n_short << endl;
	cout << "long:" << n_long << endl;
	cout << "long long:" << n_llong << endl;
	cout << endl;
	cout << "Minimum int value =" << INT_MIN << endl;
	cout << "Bits per type = " << CHAR_BIT << endl;
	getchar();
    return 0;
}

