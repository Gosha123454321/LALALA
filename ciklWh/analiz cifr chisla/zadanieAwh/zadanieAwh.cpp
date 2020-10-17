#include <iostream>
using namespace std;
int sum(int x) {
	int s = 0;
	while (x != 0) {
		s = s + x % 10;
		x /= 10;
	}
	return s;
}

int main() {
	int x, s;
	cin >> x;
	s = sum(x);
	cout << s;
	return 0;
}