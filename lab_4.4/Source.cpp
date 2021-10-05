#include <iostream>
#include <cmath>
#include <iomanip>
#include <Windows.h>
using namespace std;
int main()
{
	SetConsoleOutputCP(1251);
	int x, y, xp, xk, dx, R;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "R = "; cin >> R;
	x = xp;
	cout << fixed;
	cout << "-----------------------------------" << endl;
	cout << "|" << setw(28) << "Таблиця значень функції" << setw(6) << "|" << endl
		<< "|" << "---------------------------------" << "|" << endl
		<< "|" << setw(8) << "x" << setw(9) << "|" << setw(8) << "y" << setw(9) << "|" << endl
		<< "|" << "----------------" << "|" << "----------------" << "|" << endl;
	while (x <= xk)
	{
		if (x <= -2)
			y = x + 3;
		else
			if (x > -2 && x <= 4)
				y = ((4 - x * R - 2 * R - x) / 6);
			else
				if (x > 4 && x <= 8 - R)
					y = -R;
				else
					if (x > 8 - R && x <= 8 + R)
						y = sqrt(R * R - (8 + R));
					else
						y = -R;

		cout << "|" << setw(8) << setprecision(1) << x << setw(9) << "|"
			 << setw(8) << setprecision(1) << y << setw(9) << "|" << endl;
		x += dx;
	}
	cout << "|" << "----------------" << "|" << "----------------" << "|" << endl;
	cin.get();
	return 0;
}