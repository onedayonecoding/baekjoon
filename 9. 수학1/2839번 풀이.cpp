#include <iostream>
using namespace std;

int main() {
	int N, count = 0;
	cin >> N;
	while (N > 0) {
		if (N % 5 == 0) {
			N -= 5;
			count += 1;
		}
		else if (N % 3 == 0) {
			N -= 3;
			count += 1;
		}
		else if (N > 5) {
			N -= 5;
			count += 1;
		}
		else {
			cout << -1;
			return 0;
		}
	}
	cout << count;

}