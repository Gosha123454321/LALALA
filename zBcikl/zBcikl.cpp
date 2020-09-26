#include <iostream>
using namespace std;
int main() {
	int N, umn = 1;
	cin >> N;
	for (int i = 1; i <= N; i++) {
		umn *= i;
	}
	cout << umn << endl;
	return 0;
}