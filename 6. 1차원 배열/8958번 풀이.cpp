#include <iostream>
#include <string>
using namespace std;

int main() {
	int test_case, score;
	string test, correct = "O";
	
	cin >> test_case;
	
	for (int i = 0; i < test_case; i++) {
		cin >> test;
		int stack = 0, real_score = 0;
		for (int i = 0; i < test.size(); i++) {
			if (correct.at(0) == test.at(i)) {
				stack += 1;
			}
			else {
				stack = 0;
			}
			real_score += stack;
		}
		cout << real_score << endl;
	}
}