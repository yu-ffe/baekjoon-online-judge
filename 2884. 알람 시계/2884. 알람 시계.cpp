#include <iostream>

using namespace std;

int main() {

	int H, M;

	cin >> H >> M;

	if (M < 45) {
		H--;
		M += 15;
	}
	else {
		M -= 45;
	}

	if (H < 0) {
		H = 23;
	}

	cout << H << ' ' << M;

	return 0;
}