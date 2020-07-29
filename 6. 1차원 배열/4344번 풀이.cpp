#include <iostream>
using namespace std;

int main() {
	int test_case, test_student;
	double test_average;

	cout << fixed;
	cout.precision(3);

	cin >> test_case;
	for (int i = 0; i < test_case; i++) {
		cin >> test_student;
		double score_sum = 0.0;

		int *test_score = new int[test_student];

		for (int j = 0; j < test_student; j++) {
			cin >> test_score[j];
			score_sum += test_score[j];
		}
		test_average = score_sum / test_student;
		score_sum = 0;
		for (int j = 0; j < test_student; j++) {
			if (test_score[j] > test_average) {
				score_sum += 1;
			}
		}
		cout << (score_sum / test_student) * 100 << "%" << endl;
	}
}