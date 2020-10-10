#include <iostream>
using namespace std;
int main() {
	int N, b = 1;
	cin >> N;
	while (b <= N) {
		cout << b << ' ';
		b *= 2;
		continue;
	}
	return 0;
}
