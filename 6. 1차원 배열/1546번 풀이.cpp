#include <iostream>
using namespace std;

int main() {
	int cls;
	cin >> cls;
	double* p = new double[cls];
	for (int i = 0; i < cls; i++) {
		cin >> p[i];
	}

	double max = 0;
	for (int i = 0; i < cls; i++) {
		if (p[i] > max) {
			max = p[i];
		}
	}
	double sum = 0;
	for (int i = 0; i < cls; i++) {
		sum += (p[i] / max) * 100;
	
	}

	cout << sum / cls;

}