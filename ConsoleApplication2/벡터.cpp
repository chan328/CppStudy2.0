#include "pch.h"
#include <iostream>
#include <string>
#include <math.h>
#include <vector>
using namespace std;

int main()
{
	//vector<int> vec = { 5, 7, 9, 5 , 2 };
	vector<int> vec;
	vec.push_back(1); // vec.push_back�� ���� �迭�� ���� �߰��� �� �ִ�.
	vec.push_back(5);
	for (int y : vec)
	{
		cout << y << " ";
	}
}