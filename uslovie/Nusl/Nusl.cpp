﻿#include <iostream>
using namespace std;
int main() {
	int a, b;
	cin >> a;
	cin >> b;
	if (a == 0 && b == 0) {
		cout << "INF";
	}
	else {
		if (a == 0 || b % a != 0) {
			cout << "NO";
		}
		else {
			cout << -b / a;
		}
	}
	return 0;
}