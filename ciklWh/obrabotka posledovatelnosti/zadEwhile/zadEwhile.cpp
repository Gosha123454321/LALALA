#include <iostream>
using namespace std;
int main() {
	int x, xMax = 0;
	cin >> x;
	while (x != 0) {
		if (x > xMax) {
			xMax = x;
		}
		cin >> x;
	}
	cout << xMax;
	return 0;
}
