// Lab_02.1.cpp
// Малаховський Назар
// Лабораторна робота № 2.1
// Лінійні програми.
// Варіант 0.3

#include <iostream>
#include <cmath>

using namespace std;


// commit for secondBranch
// HELLO WORLD
// I have 57 repos in GitHub :)

// new change


int main()
{
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
