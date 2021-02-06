#include <iostream>
using namespace std;
bool isPrime(int n) {
	int z = 0;
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) {
			z++;
		}
	}
	if (z == 2) {
		return true;
	}
	else {
		return false;
	}
	return n;
}
int main() {
	int n;
	cin >> n;
	if (isPrime(n) == true) {
		cout << "prime";
	}
	else {
		cout << "composite";
	}
	return 0;
}