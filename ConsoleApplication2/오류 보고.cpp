#include "pch.h"
#include <iostream>
#include <string>
#include <math.h>
#include <vector>
using namespace std;

char ask_user(string question)
{
	cout << question << "? (yes or no) \n";
	string answer = " ";
	cin >> answer;
	if (answer == "y" || answer == "yes") return 'y';
	if (answer == "n" || answer == "no") return 'n';
	return 'b'; // �߸��� ����� ��� 'b'�� ��ȯ�Ѵ�.
}

int area(int length, int width)
{
	if (length <= 0 || width <= 0) return -1;
	return length * width;
}

int main()
{
	try {
		int x = -1;
		int y = 2;
		int z = 4;
		// ...
		int area1 = area(x, y);
	}
	catch (Bad_area)
	{
		cout << "�̷�!, area()�� �߸��� ���ڰ� ���޵�!";
	}
}
class Bad_area {};