#include <iostream>
using namespace std;
int count(string s, int i) {
	if (i == s.size() - 1) {
		return isdigit(s[i]) ? 1: 0;
	}
	if (isdigit(s[i])) {
		return 1 + count(s, i + 1);
	}
	else {
		return count(s, i + 1);
	}
}
int main() {
	int i = 0;
	string s;
	cin >> s;
	count(s, i);
	cout << count(s, i);
	return 0;
}