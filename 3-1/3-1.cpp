// 3-1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
#include<climits>   //该头文件中包含了对数据类型长度的限制

int main()
{
	using namespace std;
	int n_int = INT_MAX;//INT_MAX是定义在climits文件中的一个常量
	short n_short = SHRT_MAX;//同上
	long n_long = LONG_MAX;
	long long n_llong = LLONG_MAX;

	//用sizeof函数来获取数据类型的大小

	cout << "int is " << sizeof(int) << " bytes." << endl;
	cout << "short is " << sizeof(n_short) << " bytes." << endl;
	cout << "long is " << sizeof(long) << " bytes." << endl;
	cout << "long long is " << sizeof(n_llong) << " bytes." << endl;
	cout << endl;

	//下面是输出数据类型能表示的最大值和最小值

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

