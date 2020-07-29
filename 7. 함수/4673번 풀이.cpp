#include <iostream>
using namespace std;


int selfnumber(int a) {
	int sum = a;
	while (true) {
		if (a == 0) {
			break;
		}
		else {
			sum += a % 10;
			a /= 10;
		}
	}
	return sum;
}

int main() {
	bool N[10000] = { false };

	for (int i = 1; i < 10000; i++) {
		int ret_num = selfnumber(i);
		if (ret_num <= 10000) {
			N[ret_num-1] = true;
		}
	}

	for (int i = 1; i < 10000; i++) {
		if (!N[i-1]) {
			cout << i << "\n";
		}
	}
}