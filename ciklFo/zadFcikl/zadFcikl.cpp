#include <iostream>
using namespace std;
int main() {
	int x, y = 0;
	cin >> x;
	for (int i = x; i > 0; i /= 10) {
		y *= 10;
		y += i % 10;
	}
	cout << y;
	return 0;
}
