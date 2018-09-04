#include "pch.h"
#include <iostream>
#include <string>
#include <math.h>
#include <vector>
using namespace std;

class Token
{
public:
	char kind; // 토큰의 종류
	double value; // 종류가 숫자인 경우의 값
};

Token get_token();

vector<Token> tok;
int main()
{
	while (cin)
	{
		Token t = get_token();
		tok.push_back(t);
	}
}