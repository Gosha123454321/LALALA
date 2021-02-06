#include <iostream>
using namespace std;
string sokr(string s, int i) {
	if (s.size() % 2 != 0 && s.size() / 2 == i) {
		return string(1, s[i]);
	}
	if (s.size() % 2 == 0 && s.size() / 2 - 1 == i) {
		if (s[i] == s[i + 1]) {
			return "";
		}
		else {
			return s[i] + string("") + s[i + 1];
		}
	}
	if (s[i] == s[s.size() - 1 - i]) {
		return sokr(s, i + 1);
	}
	else {
		return s[i] + sokr(s, i + 1) + s[s.size() - 1 - i];
	}
}

int main() {
	string s;
	int i = 0;
	cin >> s;
	cout << sokr(s, i);
	return 0;
}