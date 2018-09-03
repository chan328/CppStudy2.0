#include "pch.h"
#include <iostream>
#include <string>

using namespace std;
int main()
{
	char c = 'x';
	int i1 = c;
	char c2 = i1;
	cout << c << " " << i1 << " " << c2;
}