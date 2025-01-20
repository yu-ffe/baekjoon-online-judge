#include <iostream>

using namespace std;

int main() {

	int N;
	int max = -1000000;
	int min = 1000000;

	cin >> N;

	for (int i = 0; i < N; i++) {
		int num;
		cin >> num;
		if (num > max) max = num;
		if (num < min) min = num;
	}

	cout << min << ' ' << max;

	return 0;
}