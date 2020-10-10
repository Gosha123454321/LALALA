#include <iostream>
using namespace std;
int main() {
	double a;
	int n;
	double sum = 1;
	double p = 1;
	cin >> a;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		p *= a;
		sum += p;
	}
	cout << sum;
	return 0;
}