#include <iostream>
using namespace std;
bool han_number(int n) {
	int han_num = n, stack = 0;
	int han[4] = { 0 };
	
	while (true) {
		if (han_num == 0) {
			break;
		}
		else {
			han[stack] = han_num % 10;
			han_num /= 10;
			stack += 1;
		}
	}
	int a = han[0] - han[1];
	for (int i = 0; i < stack - 1; i++) {
		if ((han[i] - han[i + 1]) == a) {
		}
		else {
			return false;
		}
	}
	return true;
}
int main() {

	int N ,num;
	
	cin >> N;
	if (N < 100) {
		num = N;
	}
	else {
		num = 99;
		while (true) {
			if (N < 100) {
				break;
			}
			else {
				if (han_number(N)) {
					num += 1;
				}
				N -= 1;
			}
		}
	}
	cout << num;
}