#include <iostream>
using namespace std;
int main() {
	int x, i = 0, xMax;
	cin >> x;
	xMax = x;
	while (x != 0) {
		cin >> x;
		if (x == xMax) {
			i++;
		}
		else if (x > xMax) {
			xMax = x;
			i = 1;
		}
	
	}
	cout << i;
	return 0;
}
