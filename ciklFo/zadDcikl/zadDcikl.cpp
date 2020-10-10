#include <iostream>
using namespace std;
int main() {
	int a, d, c = 0;
	cin >> a;
	cin >> d;
	for (int x = a; x > 0; x/=10) {
		if (x % 10 == d) {
			c++;
		}
	}
	cout << c;
	return 0;
}
