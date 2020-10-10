#include <iostream>
using namespace std;
int main() {
	int a, b, c, d;
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	if (c == 0 && d == 0) {
		return 0;
	}
	if (a == 0 && b == 0) {
		cout << "INF";
	}
	else {
		if (a == 0 || b % a != 0 || c * (-b / a) + d == 0) {
			cout << "NO";
		}
		else {
			cout << -b / a;
		}
	}
	return 0;
}