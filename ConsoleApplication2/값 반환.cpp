#include "pch.h"
#include <iostream>
#include <string>
#include <math.h>
#include <vector>
using namespace std;

int f() // <- f()�� int�� ��ȯ��.
{
	int i;
	// ....
	return i;
}

void print_untill_s(vector<string> v, string quit)
{
	for (string s : v)
	{
		if (s == quit)
		{
			return; // return�� �����ϸ� �Լ� ���� �ٴٸ���.
		}
		cout << s;
	}
}