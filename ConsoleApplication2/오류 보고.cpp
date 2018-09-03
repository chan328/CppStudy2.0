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
	return 'b'; // 잘못된 대답의 경우 'b'를 반환한다.
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
		cout << "이런!, area()에 잘못된 인자가 전달됨!";
	}
}
class Bad_area {};