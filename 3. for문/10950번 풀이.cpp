#include <iostream>
using namespace std;

int main() {
	int x,y,z;
	cin >> x;

	for (int i = 0; i < x; i++) {
		cin >> y >> z;
		cout << y + z << endl;
	}
}