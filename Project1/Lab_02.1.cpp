// Lab_02.1.cpp
// ������������ �����
// ����������� ������ � 2.1
// ˳����� ��������.
// ������ 0.3

#include <iostream>
#include <cmath>

using namespace std;

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
