#include <iostream>
using namespace std;
int reverse(int n) {
	int s = 0;
	while (n > 0) {
		s = s * 10 + n % 10;
		n /= 10;
	}
	return s;
}

int main() {
	int n;
	cin >> n;
	cout << reverse(n);
	return 0;
}