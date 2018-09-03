#include "pch.h"
#include <iostream>
#include <string>
#include <math.h>
#include <vector>
using namespace std;
int main()
{
	cout << "표현식을 입력 +, -, *, / 연산이 가능함\n";
	cout << "표현식에 끝에 x를 입력 (예, 1+2*3x)";
	int lval = 0;
	int rval;
	char op;
	int res;
	cin >> lval;
	if (!cin)
	{
		cout << "첫 번째 피연산자가 없음"; 
		return 1;
	}
	for (char op; cin >> op; )
	{
		if (op != 'x') cin >> rval;
		if (!cin) {
			cout << "두 번째 피연산자가 없음"; 
			return 1;
		} 
		switch (op)
		{
		case '+':
			lval += rval;
			break;
		case '-':
			lval -= rval;
			break;
		case '*':
			lval *= rval;
			break;
		case '/':
			lval /= rval;
			break;
		default:
			cout << "결과: " << lval << '\n';
			return 0;
			break;
		}
	}
	return 0;
}