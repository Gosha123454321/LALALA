#include <iostream>
using namespace std;
int main() {
	int x, p, y;
	int year = 0;
	cin >> x; 
	cin >> p;
	cin >> y;
	while (x < y) {
		x = x + (p / 100.0) * x;
		year++;
	}
	cout << year;
	return 0;
}