#include <iostream>
using namespace std;
string Margarita(string s, int i) {
	string n = "*";
	string s1(1, s[i]);
	if (i == s.size() - 1) {
		return s1;
	}
	else {
		return (s1 + n) + Margarita(s, i + 1);
	}
}
int main() {
	string s;
	int i = 0;
	cin >> s;
	cout << Margarita(s, i);
	return 0;
}