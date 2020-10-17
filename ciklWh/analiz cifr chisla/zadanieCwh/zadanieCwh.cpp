#include <algorithm>
#include <iostream>
using namespace std;
int Mindigit(int x) {
	int y;
	int xMin = 10;
	while (x != 0) {
		y = x % 10;
		xMin = min(y, xMin);
			x /= 10;
	}
	return xMin;
}

int Maxdigit(int x) {
	int y;
	int xMax = 0;
	while (x != 0) {
		y = x % 10;
		xMax = max(xMax, y);
			x /= 10;
	}
	return xMax;
}

int main() {
	int x, xMax, xMin;
	cin >> x;
	xMin = Mindigit(x);
	xMax = Maxdigit(x);
	cout << xMin << ' ' << xMax;
	return 0;
}