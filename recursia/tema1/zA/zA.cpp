#include <iostream>
#include <vector>
using namespace std;
int main() {
	int N;
	cin >> N;
	vector<int> f(N + 1, 0);
	f[1] = 1;
	for (int i = 2; i <= N; i++) {
		if (i - 3 >= 1) {
			f[i] += f[i - 3];
		}
		if (i - 5 >= 1) {
			f[i] += f[i - 5];
		}

	}
	if (f[N] != 0) {
		cout << "Yes";
	}
	else {
		cout << "No";
	}
	return 0;
}