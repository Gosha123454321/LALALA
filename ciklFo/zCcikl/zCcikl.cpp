#include <iostream>
using namespace std;
int main() {
	int N, a = 1;
	cin >> N;
	for (int i = 0; i < N; i++) {
		a *= 2;
	}
	cout << a;
	return 0;
}
