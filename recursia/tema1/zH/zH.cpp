#include <iostream>
#include <algorithm>
using namespace std;

pair <int, int> d[1000];
int n;

int f(int k){
	int count = 1;
	for (int i = 0; i < n; i++) {
		if (k == d[i].second) {
			count += f(d[i].first);
		}
	}
	return count;
}

int main() {
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> d[i].first >> d[i].second;
	}
	int k;
	cin >> k;
	cout << f(k);
	return 0;
}