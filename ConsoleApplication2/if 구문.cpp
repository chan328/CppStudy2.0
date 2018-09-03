#include "pch.h"
#include <iostream>
#include <string>

using namespace std;
int main()
{
	int a = 0;
	int b = 0;
	cout << "정수 두개를 입력하세요";
	cin >> a >> b;

	if (a < b)
	{
		cout << "a가 더 크네요";
	}
	else if (b > a)
	{
		cout << "b가 더 크네요";
	}
}