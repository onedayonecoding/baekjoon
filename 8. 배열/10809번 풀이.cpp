#include <iostream>
#include <string>
using namespace std;

int main() {
	string a;
	string b = "abcdefghijklmnopqrstuvwxyz";
	cin >> a;
	for (int i = 0; i < b.length(); i++) {
		cout << (int)a.find(b[i]) << " ";
	}

}