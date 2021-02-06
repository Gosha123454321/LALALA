#include <iostream>
#include <string>
using namespace std;
int main() {
	string str;
	string slovo;
	string s1;
	int len = 0;
	int max = 0;
	getline(cin, str);
	for (int i = 0; i < str.size(); i++) {
		if (str[i] != ' ') {
			len++;
			s1 = s1 + str[i];
		}			
		if (str[i] == ' ') {
			if (max < len) {
				max = len;
				slovo = s1;
			}
			len = 0;
			s1 = "";
		}
	}
	cout << slovo << endl;
	cout << max;
	return 0;
}