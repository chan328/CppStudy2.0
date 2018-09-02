#include "pch.h"
#include <iostream>
#include <string>

using namespace std;
int main()
{
	cout << "부동 소수점 값을 입력하세요";
	double n;
	cin >> n;
	cout << "n == " << n
		<< "\nn+1 == " << n + 1
		<< "\n3 곱하기 n == " << n * 3
		<< "\nn의 두 배 == " << n * 2
		<< '\n';
}