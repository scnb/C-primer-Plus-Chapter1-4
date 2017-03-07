// 3-12.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

int main()
{
	using namespace std;
	const int lbs_per_stn = 14;
	int lbs;//定义磅
	cout << "Enter your weight in pounds: ";
	cin >> lbs;
	int stone = lbs / lbs_per_stn;
	int pounds = lbs%lbs_per_stn;//计算转换成整数的英石后还剩多少磅
	cout << lbs << "pounds" << " = " << stone << " stones " << pounds << " pound(s)" << endl;
	getchar();
	getchar();
    return 0;
}

