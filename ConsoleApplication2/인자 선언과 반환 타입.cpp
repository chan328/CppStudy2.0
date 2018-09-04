#include "pch.h"
#include <iostream>
#include <string>
#include <math.h>
#include <vector>
using namespace std;

double fct(int a, double d); // fct의 선언 <- 몸체가 없음.
double fct(int a, double d) { return a * d; } // fct의 정의

int current_power(); // <- 인자를 받지않음
void increase_power(int level); // <- 값을 반환하지 않음

// vs[hint]에서 s를 찾아서 찾으면 그 인덱스를 반환하고 못찾으면 -1을 반환.
int my_find(vector<string> vs, string s, int hint)
{
	if (hint < 0 || vs.size() <= hint) hint = 0;
	for (int i = hint; i < vs.size(); i++)
	{
		if (vs[i] == s) return i;
	}
	return -1;
}