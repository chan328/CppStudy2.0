#include "pch.h"
#include <iostream>
#include <string>

using namespace std;
int main()
{
	cout << "�̸��� �ΰ� �Է��غ�����.\n";
	string first;
	string second;
	cin >> first >> second;
	if (first == second)
	{
		cout << "�� �̸��� ���׿�!";
	}
	else if (first < second)
	{
		cout << first << "�� ���ĺ������� �տ� ��ġ��: ";
	}
	else if (second < first)
	{
		cout << second << "�� ���ĺ������� �տ� ��ġ��: ";
	}
}