// 3-12.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>

int main()
{
	using namespace std;
	const int lbs_per_stn = 14;
	int lbs;//�����
	cout << "Enter your weight in pounds: ";
	cin >> lbs;
	int stone = lbs / lbs_per_stn;
	int pounds = lbs%lbs_per_stn;//����ת����������Ӣʯ��ʣ���ٰ�
	cout << lbs << "pounds" << " = " << stone << " stones " << pounds << " pound(s)" << endl;
	getchar();
	getchar();
    return 0;
}

