// 4-12.cpp : 定义控制台应用程序的入口点。
//C++的结构赋值

#include "stdafx.h"
#include <iostream>

struct inflatable
{
	char name[20];
	float volume;
	double price;
};

int main()
{
	using namespace std;
	inflatable bouquet =
	{
		"sunflowers",
		0.20,
		12.49
	};
	inflatable choice;
	cout << bouquet.name << endl << bouquet.volume << endl << bouquet.price << endl;
	choice = bouquet;
	cout << choice.name << endl << choice.volume << endl << choice.price << endl;
	getchar();
    return 0;
}

