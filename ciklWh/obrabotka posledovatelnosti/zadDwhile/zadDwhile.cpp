#include <iostream>
using namespace std;
int main() {
	int x, q = 0;
	cin >> x;
	while (x != 0) {
		if (x % 2 == 0) {
			q++;
		}
		cin >> x;
	}
	cout << q;
	return 0;
}