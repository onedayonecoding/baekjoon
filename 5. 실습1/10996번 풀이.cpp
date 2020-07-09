#include <iostream>
using namespace std;

int main() {
	int a;
	cin >> a;

	for (int i = 1; i <= a; i++) {
		for (int j = 1; j <= a; j++) {
			if (j % 2 == 1) {
				j += 1;
				cout << "* ";
			}
		}
		cout << endl;

		for (int j = 2; j <= a; j++) {
			if (j % 2 == 0) {
				j += 1;
				cout << " *";
			}
		}
		cout << endl;
		
	}
}