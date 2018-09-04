#include "pch.h"
#include <iostream>
#include <string>
#include <math.h>
#include <vector>
using namespace std;

void Print(vector<double> v) // 값에 의한 전달이 정확한가?
{
	cout << "{";
	for (int i = 0; i < v.size; i++)
	{
		cout << v[i];
		if (i != v.size() - 1) cout << ", ";
	}
}

void f(int x)
{
	vector<double> vd1(10);
	vector<double> vd2(1000000);
	vector<double> vd3(x);
	Print(vd1);
	Print(vd2);
	Print(vd3);
}