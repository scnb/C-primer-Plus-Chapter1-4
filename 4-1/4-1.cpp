// 4-1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

int main()
{
	using namespace std;
	int yams[3];
	yams[0] = 7;
	yams[1] = 8;
	yams[2] = 6;
	int yamscost[3] = { 20,30,5 };
	cout << "Total yams = ";
	cout << yams[0] + yams[1] + yams[2] << endl;
	cout << "The package with " << yams[1] << " yams costs ";
	cout << yamscost[1] << " cents per yam.\n";
	int total = yams[0] * yamscost[0] + yams[1] * yamscost[1];
	total = total + yams[2] * yamscost[2];
	cout << "The total yam expense is " << total << " cents.\n";
	cout << "Size of yams array = " << sizeof(yams) << " bytes.\n";
	cout << "Size of one element = " << sizeof(yams[0]) << " bytes.\n";
	getchar();
    return 0;
}

