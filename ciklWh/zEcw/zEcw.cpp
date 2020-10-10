#include <iostream>
using namespace std;
int main() {
	int N, k = 0, a = 1;
	cin >> N;
	while (a <= N) {
		a *= 2;
		k++;
		
	}
	cout << k;
	return 0;
}