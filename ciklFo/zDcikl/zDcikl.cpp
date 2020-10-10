#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int n, k, fN, fK, fN_K, C;
	cin >> n;
	cin >> k;
	for (int i = 1; i <= n; i++) {
		fN *= i;
	}
	for (int i = 1; i <= k; i++) {
		fK *= i;
	}
	for (int i = 1; i <= n - k; i++) {
		fN_K *= i;
	}
	C = fN / (fK * fN_K);
	cout << C;
	return 0;
}