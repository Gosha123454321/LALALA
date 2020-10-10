#include <iostream>
using namespace std;
int main() {
	int x, c = 0;
	cin >> x;
	for (int i = x; i > 0; i /= 10) {
		c += i % 10;


	}
	cout << c;
	return 0;
}
