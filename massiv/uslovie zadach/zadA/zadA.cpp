#include <iostream>
using namespace std;
int main() {
	const int len = 100;
	int N;
	cin >> N;
	int a[len];
	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < N; i++) {
		if (i % 2 == 0) {
			cout << a[i] << ' ';
		}
	}
	return 0;
}