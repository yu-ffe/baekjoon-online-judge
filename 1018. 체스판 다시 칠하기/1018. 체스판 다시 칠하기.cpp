#include <iostream>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	char board[50][50];

	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		cin >> board[i];
	}

	int min = 64;

	for (int i = 0; i <= N - 8; i++) {
		for (int j = 0; j <= M - 8; j++) {
			int count = 0;
			for (int k = i; k < i + 8; k++) {
				for (int l = j; l < j + 8; l++) {
					if ((k + l) % 2 == 0) {
						if (board[k][l] != 'W') count++;
					}
					else {
						if (board[k][l] != 'B') count++;
					}
				}
			}
			if (count > 32) count = 64 - count;
			if (count < min) min = count;
		}
	}

	cout << min;

	return 0;
}