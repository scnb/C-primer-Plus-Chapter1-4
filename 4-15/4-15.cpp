// 4-15.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>

int main()
{
	using namespace std;
	int updates = 6;
	int * p_updates;
	p_updates = &updates;
	cout << "Values:updates = " << updates << " ,*p_updates = " << *p_updates << endl;
	cout << "Address = " << &updates << " ,p_updates = " << p_updates << endl;
	*p_updates = *p_updates + 1;
	cout << "New updates = " << updates << endl;
	getchar();	
    return 0;
}

