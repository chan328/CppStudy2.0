#include "pch.h"
#include <iostream>
#include <string>
#include <math.h>
using namespace std;

int square(int x)
{
	int y = 0;
	for (int i = 0; i < x; i++)
	{
		y += x;
	}
	return y;
}
int main()
{
	int a;
	cout << "������ ���� �Է��ϼ���\n";
	cin >> a;
	cout << square(a) << '\n';
}