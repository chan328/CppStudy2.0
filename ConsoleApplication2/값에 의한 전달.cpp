#include "pch.h"
#include <iostream>
#include <string>
#include <math.h>
#include <vector>
using namespace std;

int f(int x)
{
	x += 1; // ���� ���� x�� ���ο� ���� �־� ��.
	return x;
}

int main()
{
	int xx = 0;
	cout << f(xx) << '\n';
	cout << xx << '\n';
	int yy = 7;
	cout << f(yy) << '\n';
	cout << yy << '\n';
}