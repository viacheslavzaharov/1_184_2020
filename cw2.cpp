#include <iostream>
using namespace std;
int main() {
	int a;
	cin >> a;
	string value = a%2== 0 ? "odd": "even";
	cout  << value << "\n";
		return 0;
}