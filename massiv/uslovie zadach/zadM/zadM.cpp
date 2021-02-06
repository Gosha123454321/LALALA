#include <iostream>
using namespace std;
int main() {
	const int len = 10000;
	int N, a, b, c, d;
	cin >> N;
	cin >> a;
	cin >> b;
	cin >> c;
	cin >> d;
	int A[len];
	for (int i = 0; i < N; i++) {
		A[i] = i + 1;
	}
	for (int i = 0; i < (b - a + 1) / 2; i++) {
		swap(A[a - 1 + i], A[b - 1 - i]);
	}
	for (int i = 0; i < (d - c + 1) / 2; i++) {
		swap(A[c - 1 + i], A[d - 1 - i]);
	}
	for (int i = 0; i < N; i++) {
		cout << A[i] << ' ';
	}
	return 0;
}