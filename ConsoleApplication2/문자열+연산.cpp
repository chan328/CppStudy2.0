#include "pch.h"
#include <iostream>
#include <string>

using namespace std;
int main()
{
	cout << "���� �̸��� �Է��ϼ���\n";
	string first;
	string second;
	cin >> first >> second;
	string name = first + ' ' + second;
	cout << "�ȳ��ϼ���, " << name << '\n';
}