#include <iostream>
#include <cmath>
using namespace std;
int main() {
	int a, b;
	cin >> a;
	cin >> b;
	for (int i = a; i <= b; i++) {
		int x = sqrt(i);
		int y = pow(x, 2);
		if (y == i)
			cout << i;

	}
	return 0;
}