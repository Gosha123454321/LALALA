#include <iostream>
using namespace std;
string scobka(string s, int i) {
	string n = "(";
	string l = ")";
	string s1(1, s[i]);
	if (i == s.size()) {
		return "";
	}
	if (i == s.size() / 2) {
		return s1 + scobka(s, i + 1);
	}
	if (s.size() % 2 == 0 && i == s.size() / 2 - 1) {
		return s1 + scobka(s, i + 1);
	}
	if (i < s.size() / 2) {
		return (s1 + n) + scobka(s, i + 1);
	}
	if (i > s.size() / 2) {
		return (l + s1) + scobka(s, i + 1);
	}
}
int main() {
	string s;
	int i = 0;
	cin >> s;
	cout << scobka(s, i);
	return 0;
}
