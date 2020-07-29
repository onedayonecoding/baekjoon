#include <iostream>
using namespace std;

int main() {
	int a, b = 1, save, stack = 1, c = 1, d;
	cin >> a;
	save = a;
	if (save == 1) {
		cout << 1 << "/" << 1;
		return 0;
	}
	while (true) {
		if (a > b) {
			a -= b;
			b++;
			stack++;
		}
		else {
			break;
		}
	}


	for (int i = 0; i < stack; i++) {
		c += i;

	}

	for (int i = 1; i <= stack; i++) {
		if (c == save) {
			d = i;
			break;
		}
		else {
			save -= 1;
		}
	}

	cout << d << "/" << stack + 1 - d;

}