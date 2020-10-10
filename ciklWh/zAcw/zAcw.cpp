#include <iostream>
using namespace std;
int main() {
	int N, a = 1, b;
	cin >> N;
	b = a * a;
	while (b <= N) {
		cout << b << ' ';
		a++;
		b = a * a;
		continue;
	
	}
	
	return 0;
}
