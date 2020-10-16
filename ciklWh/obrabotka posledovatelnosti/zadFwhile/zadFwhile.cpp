#include <iostream>
using namespace std;
int main() {
	int x, q = 0, xSl = 0;
	cin >> x;
	while (x != 0) {
		xSl = x;
		cin >> x;
		if (x > xSl) {
			q++;
		}
	}
	cout << q;
	return 0;
}