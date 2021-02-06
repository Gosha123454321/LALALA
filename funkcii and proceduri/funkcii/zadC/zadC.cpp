#include <iostream>
using namespace std;
bool Xor(bool x, bool y) {
	int otv = 0;
	if ((x + y) % 2 == 0) {
		otv = 0;
	}
	else {
		otv = 1;
	}
	return otv;
}
int main() {
	int otv = 0;
	bool x;
	bool y;
	cin >> x >> y;
	cout << Xor(x, y);
	return 0;
}
