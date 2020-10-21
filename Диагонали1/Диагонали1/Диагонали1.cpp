#include <iostream>
using namespace std;
int main() {
	int n = 0;
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j < n + 1; j++) {
			if (i == j || i + j == n + 1 || i == 1 || j == 1 || i == n || j == n)
				cout << "* ";
			else
				cout << "  ";
		}
		cout << endl;
	}
	return 0;
}
