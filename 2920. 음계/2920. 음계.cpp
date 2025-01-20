#include <iostream>

using namespace std;

int main() {

	int n[8];

	for (int i = 0; i < 8; i++) {
		cin >> n[i];
	}

	bool asc = true;

	for (int i = 0; i < 7; i++) {
		if (n[i] > n[i + 1]) {
			asc = false;
			break;
		}
	}

	if (asc) {
		cout << "ascending";
		return 0;
	}

	bool desc = true;

	for (int i = 0; i < 7; i++) {
		if (n[i] < n[i + 1]) {
			desc = false;
			break;
		}
	}

	if (desc) {
		cout << "descending";
		return 0;
	}

	cout << "mixed";

	return 0;
}