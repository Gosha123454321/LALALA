#include <cmath>
#include <iostream>
using namespace std;
int main() {
	int n, sum = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		int a = pow(i, i);
		sum += a;


	}
	cout << sum << endl;
	return 0;
}