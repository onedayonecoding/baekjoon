#include <iostream>
#include <string>
using namespace std;

int main() {
	int test,a;
	string input;
	
	
	cin >> test;

	for (int k = 0; k < test; k++) {
		cin >> a >> input;

		for (int i = 0; i < input.length(); i++) {
			for (int j = 0; j < a; j++) {
				cout << input[i];
			}
		}
		cout << "\n";
	}
	
}