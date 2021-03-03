#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> m;

void f(int n, int x, int y, int chislo) {
	int x = 1;
	int y = 1;
	
		while (m[x][y + 1] == 0) {
			m[x][y] = chislo;
			chislo++;
			y++;
		}
		while (m[x + 1][y] == 0) {
			m[x][y] = chislo;
			chislo++;
			x++;
		}
		while (m[x][y - 1] == 0) {
			m[x][y] = chislo;
			chislo++;
			y--;
		}
		while (m[x - 1][y] == 0) {
			m[x][y] = chislo;
			chislo++;
			x--;
		}
	}
	


int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		vector<int> v(n, 0);
		m.push_back(v);
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			cout << m[i][j] << ' ';
		}
		cout << endl;
	}
}
