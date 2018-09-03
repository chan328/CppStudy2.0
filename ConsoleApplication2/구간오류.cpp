#include "pch.h"
#include <iostream>
#include <string>
#include <math.h>
#include <vector>
using namespace std;
int main()
{
try 
{
	vector<int> v;
	for (int x; cin >> x; )
		v.push_back(x);
	for (int i = 0; i <= v.size(); i++)
	{
		cout << "v[" << i << "] == " << v[i] << '\n';
	}
}
	catch (out_of_range)
	{
		cerr << "이런! 구간오류 발생!\n";
		return 1;
	}
	catch (...)
	{
		cerr << "예외: 무언가 잘못됨\n";
		return 2;
	}
}