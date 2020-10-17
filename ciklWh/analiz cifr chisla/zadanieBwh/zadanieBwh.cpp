#include <iostream>
using namespace std;
int quantity(int x) {
	int q = 0;
	while (x != 0) {
		if (x % 10 == 0) {
			q++;
			
		}
		x /= 10;
	}
	return q;
}

int main() {
	int x, q;
	cin >> x;
	q = quantity(x);
	cout << q;
	return 0;
}