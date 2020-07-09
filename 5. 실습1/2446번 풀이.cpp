#include <iostream>
using namespace std;

int main() {
	int a;
	cin >> a;

	for (int i = 0; i < a; i++) {
		for (int j = 0; j < i; j++) {
			cout << " ";
		}
		for (int j = 0; j < (2 * (a-i) - 1); j++) {
			cout << "*";
		}
		cout << endl;
	}

	for (int i = a; i > 1; i--) {
		for (int j = i - 2; j > 0; j--) {
			cout << " ";
		}
		for (int j = 0; j < (2 * (a - i + 1) + 1); j++) {
			cout << "*";
		}
		cout << endl;
	}
}