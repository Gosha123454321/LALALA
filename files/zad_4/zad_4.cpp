#include <iostream>
#include <fstream>
using namespace std;
int main() {
	fstream file("24-5.txt");
	while (file) {
		string s;
		file >> s;
		int count = 0;
		for (int i = 0; i < s.size(); i++) {
			if (s[i] == '(') {
				count++;
			}
			if (count == 10000) {
				cout << i;
				break;
			}
		}
	}
}