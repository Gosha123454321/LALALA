#include <iostream>
using namespace std;
int main() {
	int x, sum = 0;
	cin >> x;
	if (x == 0) {
		cin >> x;
	}
	while (x != 0) {
		sum += x;
		cin >> x;
		if (x == 0) {
			cin >> x;
		}
	}
	cout << sum;
	return 0;
}