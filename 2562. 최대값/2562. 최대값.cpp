#include <iostream>

using namespace std;

int main() {

	int n[9];
	int max = 0;
	int idx = 0;

	for (int i = 0; i < 9; i++) {
		cin >> n[i];
	}

	for (int i = 0; i < 9; i++) {
		if (n[i] > max) {
			max = n[i];
			idx = i;
		}
	}

	cout << max << '\n' << idx + 1;

	return 0;
}