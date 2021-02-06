#include <iostream>
using namespace std;
int main() {
	const int len = 10000;
	int N, K;
	cin >> N;
	int a[len];
	for (int i = 0; i < N; i++) {
		 cin >> a[i];
	}
	cin >> K;
	for (int i = 0; i < N - 1; i++) {
		if (abs(K)) {
			K = a[i];
		}
		else {
			K = a[0];
		}
	}
	for (int i = 0; i < N; i++) {
		cout << a[i] << ' ';
	}
	return 0;
}