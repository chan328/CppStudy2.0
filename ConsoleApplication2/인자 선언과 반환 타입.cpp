#include "pch.h"
#include <iostream>
#include <string>
#include <math.h>
#include <vector>
using namespace std;

double fct(int a, double d); // fct�� ���� <- ��ü�� ����.
double fct(int a, double d) { return a * d; } // fct�� ����

int current_power(); // <- ���ڸ� ��������
void increase_power(int level); // <- ���� ��ȯ���� ����

// vs[hint]���� s�� ã�Ƽ� ã���� �� �ε����� ��ȯ�ϰ� ��ã���� -1�� ��ȯ.
int my_find(vector<string> vs, string s, int hint)
{
	if (hint < 0 || vs.size() <= hint) hint = 0;
	for (int i = hint; i < vs.size(); i++)
	{
		if (vs[i] == s) return i;
	}
	return -1;
}