// 2-5.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>

void simon(int);//����ԭ��

int main()
{
	using namespace std;
	simon(3);
	cout << "Pick an integer: ";
	int count;
	cin >> count;
	simon(count);
	cout << "Done! " << endl;
	cin.get();
	cin.get();
    return 0;
}

void simon(int n)//����ͷ
{
	using namespace std;
	cout << "Simon says touch your toes " << n << " times." << endl;
}

