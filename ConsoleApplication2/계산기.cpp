#include "pch.h"
#include <iostream>
#include <string>
#include <math.h>
#include <vector>
using namespace std;
int main()
{
	cout << "ǥ������ �Է� +, -, *, / ������ ������\n";
	cout << "ǥ���Ŀ� ���� x�� �Է� (��, 1+2*3x)";
	int lval = 0;
	int rval;
	char op;
	int res;
	cin >> lval;
	if (!cin)
	{
		cout << "ù ��° �ǿ����ڰ� ����"; 
		return 1;
	}
	for (char op; cin >> op; )
	{
		if (op != 'x') cin >> rval;
		if (!cin) {
			cout << "�� ��° �ǿ����ڰ� ����"; 
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
			cout << "���: " << lval << '\n';
			return 0;
			break;
		}
	}
	return 0;
}