#include "pch.h"
#include <iostream>
#include <string>
#include <math.h>
#include <vector>
using namespace std;

class Token
{
public:
	char kind; // ��ū�� ����
	double value; // ������ ������ ����� ��
};
int main()
{
	Token t;
	t.kind = '+';

	Token t2;
	t2.kind = '8';
	t2.value = 3.14;

	Token tt = t; // ���� �ʱ�ȭ.
	if (tt.kind != t.kind)
	{
		t = t2;
	}
	cout << t.value;

	

}