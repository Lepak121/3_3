#include <iostream>
#include <cmath>

using namespace std;

int main() {

	double x, y, R;
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;





	if (x <= -8)
		y = -R;
	else
		if (x > -8 && x < -R)
			y = R / 8;
		else
			if (x > -R && x < R)
				y = sqrt(R * R - x * x);
			else
				if (x > R && x < 5)
					y = 2 * x / (5 - R) - 2 * R / (5 - R);
				else
					y = 5;
	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;

}