#include "pch.h"
#include <iostream>
#include <string>

using namespace std;
int main()
{
	cout << "이름을 두개 입력해보세요.\n";
	string first;
	string second;
	cin >> first >> second;
	if (first == second)
	{
		cout << "두 이름이 같네요!";
	}
	else if (first < second)
	{
		cout << first << "가 알파벳적으로 앞에 위치함: ";
	}
	else if (second < first)
	{
		cout << second << "가 알파벳순으로 앞에 위치함: ";
	}
}