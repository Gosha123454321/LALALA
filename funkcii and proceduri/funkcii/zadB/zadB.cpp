#include <iostream>
using namespace std;
double power(double a, int n) {
	double otv = 1;
	for (int i = 0; i < n; i++) {
		otv *= a;
	}
	return otv;
}
int main() {
	double a;
	int n;
	cin >> a;
	cin >> n;
	cout << power(a, n);
	return 0;
}