#include "pch.h"
#include <iostream>
#include <string>

using namespace std;
int main()
{
	int a = 20000;
	char c = a; // 다른값으로 바뀜.
	int b = c;
	if (a != b)
	{
		cout << "이런: " << a << "!=" << b << '\n';
	}
	else
	{
		"와우 문자가 엄청 크네요.\n";
	}
}