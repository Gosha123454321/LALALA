#include <iostream>
#include <vector>
#include <string>
using namespace std;

vector <string> a;

int f(int x, int y) {
	int count = 1;

	a[x][y] = '*';

	if (a[x][y + 1] == '.') {
		count += f(x, y + 1);
	}
	if (a[x][y - 1] == '.') {
		count += f(x, y - 1);
	}
	if (a[x + 1][y] == '.') {
		count += f(x + 1, y);
	}
	if (a[x - 1][y] == '.') {
		count += f(x - 1, y);
	}
	return count;
}

int main() {
	int n, x, y;
	cin >> n;

	for (int i = 0; i < n; i++) {
		string s;
		cin >> s;
		a.push_back(s);
	}
	
	cin >> x >> y;
	cout << f(x - 1, y - 1);
	
	return 0;
}