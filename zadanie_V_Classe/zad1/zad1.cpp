﻿#include <string>
#include <iostream>
using namespace std;
int main() {
	string s;
	cin >> s;
	for (int i = 0; i < s.size(); i++) {
		cout << " i = " << i << ' ' << s[i] << endl;
	}
	return 0;
}