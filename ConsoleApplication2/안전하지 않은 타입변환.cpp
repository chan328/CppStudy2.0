#include "pch.h"
#include <iostream>
#include <string>

using namespace std;
int main()
{
	int a = 20000;
	char c = a; // �ٸ������� �ٲ�.
	int b = c;
	if (a != b)
	{
		cout << "�̷�: " << a << "!=" << b << '\n';
	}
	else
	{
		"�Ϳ� ���ڰ� ��û ũ�׿�.\n";
	}
}