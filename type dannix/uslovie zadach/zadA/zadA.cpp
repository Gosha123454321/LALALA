#include <iostream>
using namespace std;
bool Isdigit(char c) {
	if (c >= '0' and c <= '9') {
		return true;
	}
	else {
		return false;
	}
}

int main() {
	int c, int n;
	cin >> c;
	n = Isdigit(c);
	if (n == true) {
		cout << "yes";
	}
	else {
		cout << "no";
	}
	return 0;
}