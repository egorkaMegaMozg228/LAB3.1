
#include <iostream>
#include <cmath>
#include <Windows.h>
using namespace std;

int main()
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	double x, A, B, z1, z2;
	
	cout << "x = "; cin >> x;
	
	
		A = 1 / (fabs(x + 2)) + 1;
		if (x < 1) {
			B = 7 * x * x + x - 8;
		}
		if (x >= 1 && x <= 4) {
			B = 1 / tan((x + 4) / sqrt(11)) + 3;
		}
		if (x > 4) {
			B = sqrt(1 + fabs(cos(x) * cos(x) * cos(x)));
		}
		z1 = A - B;
		cout << "1) y = " << z1 << endl;
	
		A = 1 / (fabs(x + 2)) + 1;
		if (x < 1) {
			B = 7 * x * x + x - 8;
		} else if (x > 4) {
			B = sqrt(1 + fabs(cos(x) * cos(x) * cos(x)));
		} else B = 1 / tan((x + 4) / sqrt(11)) + 3;
		z1 = A - B;
	/*if (x == -2) {
		cout << "error" << endl;
		cout << "deleting /C/Program Files/Microsoft Visual Studio..." << endl;
		system("pause");
		return 0;\\
	}*/

	
	cout << endl;
	cout << "2)y = " << z1 << endl;
	system("pause");
	return 0;

}


