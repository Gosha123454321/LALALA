#include <iostream>
using namespace std;
int main() {
	const int len = 35;
	int N;
	cin >> N;
	int a[len];
	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}
	for (int i = 0; i < N/2; i++) {
		swap(a[i], a[N - 1 - i]);
	}
	for (int i = 0; i < N; i++) {
		cout << a[i] << ' ';
	}
	return 0;
}