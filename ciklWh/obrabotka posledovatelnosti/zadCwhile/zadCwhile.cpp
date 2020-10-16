#include <iostream>
using namespace std;
int main() {
	double x, sum = 0;
	int c = 0;
	cin >> x;
	while (x != 0) {
		sum += x;
		c++;
		cin >> x;
	}
	cout << sum / c;
	return 0;
}