#include <iostream>

using namespace std;

int main() {
	int A, B;
	
	while (true) {
		cin >> A >> B;
		if (A != 0 or B != 0) {
			cout << A + B << "\n";
		}
		else {
			break;
		}

	}
}