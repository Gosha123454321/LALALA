#include <iostream>
using namespace std;
int main() {
	int x;
	int xMax = 0, xMax2 = 0;
	cin >> x;
	while (x != 0) {
		cin >> x;
		if (x > xMax) {
			xMax2 = xMax;
			xMax = x;
		}
		else if (x <= xMax && x > xMax2) {
			xMax2 = x;
		}
	}
	cout << xMax2;
	return 0;
}