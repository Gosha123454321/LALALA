#include <iostream>
using namespace std;
int main() {
	const int len = 100;
	int N;
	cin >> N;
	int a[len];
	int colvo = 0;
	for (int i = 0; i < N; i++) {
		cin >> a[i];
	}
	for (int i = 1; i < N - 1; i++) {
		if (a[i - 1] < a[i] && a[i] > a[i + 1]) {
			colvo++;
		}
	}
	cout << colvo;
	return 0;
}