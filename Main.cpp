// Matrix.cpp : �������̨Ӧ�ó������ڵ㡣
//
#include "./stdafx.h"
#include "../Include/matrix.h"
#include <iostream>

using namespace std;

int main()
{
	Matrix mt(3, 3);
	cout << Matrix::eyes(5) << endl;
	cin >> mt;
	cout << (2 * mt) << endl;
	system("pause");
    return 0;
}
