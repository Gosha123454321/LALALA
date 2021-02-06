#include <iostream>
using namespace std;
char max(string s, int i) {
	if (i == s.size() - 1) {
		return s[i];
	}
	char x = max(s, i + 1);
	if (s[i] >= x) {
		return s[i];
	}
	else {
		return x;
	}
}
int main() {
	int i = 0;
	string s;
	cin >> s;
	max(s, i);
	cout << max(s, i);
	return 0;
}