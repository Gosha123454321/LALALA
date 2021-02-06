#include <iostream>
using namespace std;
bool Election(bool x, bool y, bool z) {
	int otv = 0;
	if ((x + y + z) <= 1) {
		otv = 0;
	}
	else {
		otv = 1;
	}
	return otv;
}
int main() {
	int otv;
	bool x, y, z;
	cin >> x >> y >> z;
	cout << Election(x, y, z);
	return 0;
}