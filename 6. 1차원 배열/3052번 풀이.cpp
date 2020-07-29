#include <iostream>
using namespace std;

int main() {
	int p[42] = { 0 };
	int a;
	for (int i = 0; i < 10; i++) {
		cin >> a;
		p[(a % 42)] += 1;
	}
	int stack = 0;
	for (int i = 0; i < 42; i++) {
		if (p[i] > 0) {
			stack += 1;
		}
	}
	cout << stack;
}