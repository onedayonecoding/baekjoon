#include <iostream>

using namespace std;

int main() {
	int stack = 1, num, save, plus;

	cin >> save;
	plus = (save / 10) + (save % 10);
	if (plus >= 10) {
		plus = plus % 10;
		num = (save % 10) * 10 + plus;
	}
	else {
		num = (save % 10) * 10 + (save / 10) + (save % 10);
	}

	while (true) {
		if (save == num) {
			break;
		}
		else {
			plus = (num / 10) + (num % 10);
			if (plus >= 10) {
				plus = plus % 10;
				num = (num % 10) * 10 + plus;
			}
			else {
				num = (num % 10) * 10 + (num / 10) + (num % 10);
			}
			stack += 1;
		}
	}
	cout << stack;
}