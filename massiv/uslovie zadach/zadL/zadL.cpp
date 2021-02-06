#include <iostream>
using namespace std;
int main() {
	const int len = 100000;
	int N;
	cin >> N;
	int a[len];
	for (int i = 0; i < N; i++) {
		cin >> a[len];
	}
	int c = 0;
	int r;
	cin >> r;
	for (int i = 0; i < N - 1; i++) {
		if (a[i] >= r) {
			c++;
		}
	}
	cout << c + 1;
	return 0;
}