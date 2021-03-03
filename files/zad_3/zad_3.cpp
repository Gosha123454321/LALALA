#include <iostream>
#include <fstream>
using namespace std;
int main() {
	fstream file("24-s1.txt");
	int count = 0;
	while (file) {
		string s;
		file >> s;
		int u = 0, k = 0;
		for (int i = 0; i < s.size(); i++) {
			if (s[i] == 'U') {
				u++;
			}
			if (s[i] == 'K') {
				k++;
			}
		}
		if (k > u) {
			count++;
		}
	}
	cout << count;
}