// Lab_02.1.cpp
// ������������ �����
// ����������� ������ � 2.1
// ˳��� ��������.
// ������ 0.3

#include <iostream>
#include <cmath>
#include <Windows.h>

// first commit for firstBranch
// second commit for firstBranch
// first commit for firstBranch

using namespace std;


// commit for secondBranch
// HELLO WORLD
// I have 57 repos in GitHub :)

// new changes that will not come to fetch
// i dont know what to do


int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	double m;
	double n;
	double z1;
	double z2;

	cout << "m = "; cin >> m;
	cout << "n = "; cin >> n;

	z1 = ((m - 1) * sqrt(m) - (n - 1) * sqrt(n)) / (sqrt(m * m * m * n) + m * n + m * m - m);
	z2 = ((sqrt(m) - sqrt(n)) / m);

	cout << endl;
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;

	cin.get();
	return 0;
}
