#include "pch.h"
#include <iostream>
#include <string>
#include <math.h>
#include <vector>
using namespace std;

int f() // <- f()는 int를 반환함.
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
			return; // return을 선언하면 함수 끝에 다다른다.
		}
		cout << s;
	}
}