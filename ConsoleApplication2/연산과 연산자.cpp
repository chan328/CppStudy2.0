#include "pch.h"
#include <iostream>
#include <string>

using namespace std;
int main()
{
	int count;
	cin >> count;
	string name;
	cin >> name;

	int c2 = count + 2;
	string s2 = name + "Jr. ";

	int c3 = count - 2;

	cout << count << name << c2 << s2 << c3;
}