#include <iostream>

using namespace std;

int main() {

	int T;
	cin >> T;

	for (int i = 0; i < T; i++) {
		int H, W, N;
		cin >> H >> W >> N;
		int floor = N % H;
		int room = N / H + 1;
		if (floor == 0) {
			floor = H;
			room--;
		}
		cout << floor * 100 + room << '\n';
	}

	return 0;
}