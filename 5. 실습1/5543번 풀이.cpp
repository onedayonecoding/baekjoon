#include <iostream>

using namespace std;

int main() {
	int burger;
	int save = 2000;
	for (int i = 0; i < 3; i++) {
		cin >> burger;
		if (burger < save) {
			save = burger;
		}
	}
	burger = save;
	save = 2000;

	int beverage;
	for (int i = 0; i < 2; i++) {
		cin >> beverage;
		if (beverage < save) {
			save = beverage;
		}
	}

	cout << burger + save - 50;
	
}