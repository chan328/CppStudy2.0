#include "pch.h"
#include <iostream>
#include <string>
#include <math.h>
#include <vector>
using namespace std;

class Token
{
public:
	char kind; // 토큰의 종류
	double value; // 종류가 숫자인 경우의 값
};
int main()
{
	Token t;
	t.kind = '+';

	Token t2;
	t2.kind = '8';
	t2.value = 3.14;

	Token tt = t; // 복사 초기화.
	if (tt.kind != t.kind)
	{
		t = t2;
	}
	cout << t.value;

	

}