#include <iostream>
#include <string>
using namespace std;
int main() {
	string str1;
	int colvo = 0;
	getline(cin, str1);
	for (int i = 0; i < str1.size(); i++) {
		if (str1[i] == ' ') {
			colvo++;
		}
	}
	colvo += 1;
	cout << colvo;
	return 0;
}