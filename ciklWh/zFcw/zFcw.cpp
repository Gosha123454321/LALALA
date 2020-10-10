#include <iostream>
using namespace std;
int main() {
	double x, y;
	int a = 1;
	cin >> x;
	cin >> y;
	while (x < y) {
		x *= 1.1;
		a++;
		continue;
	}
	cout << a;
	return 0;
}