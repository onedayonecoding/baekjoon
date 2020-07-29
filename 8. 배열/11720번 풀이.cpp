#include <iostream>
using namespace std;

int main() {
	int n, total = 0;
	char input;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> input;
		total += input - 48;
	}

	cout << total;
}