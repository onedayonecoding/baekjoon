#include <iostream>
using namespace std;

int main() {
	int num, max = 0;

	int *p = new int[9];

	for (int i = 0; i < 9; i++) {
		cin >> p[i];
		if (p[i] > max) {
			max = p[i];
			num = i;
		}
	}

	cout << max << endl << num+1;
}