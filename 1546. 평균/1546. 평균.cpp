#include <iostream>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	int score[1000];
	int max = 0;
	double sum = 0;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> score[i];
		if (score[i] > max) max = score[i];
	}

	for (int i = 0; i < N; i++) {
		sum += (double)score[i] / max * 100;
	}

	cout << sum / N;


	return 0;
}