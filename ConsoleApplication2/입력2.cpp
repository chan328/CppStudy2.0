#include "pch.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	string name;
	int age;
	cout << "이름과 나이를 입력하세요\n";
	cin >> name;
	cin >> age;
	cout << "안녕하세요" << name << "(나이:" << age << ")";
}