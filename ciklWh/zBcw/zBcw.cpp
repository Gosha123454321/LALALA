#include <iostream>
using namespace std;
int main() {
	int a, b = 2 ;
	cin >> a;
	
	while (b <= a) {
		if (a % b == 0) {
			cout << b;
			break;
		}
		b++;
	}
	return 0;
}