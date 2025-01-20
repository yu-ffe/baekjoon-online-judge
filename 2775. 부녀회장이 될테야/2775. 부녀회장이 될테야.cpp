#include <iostream>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T, k, n;

	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> k >> n;
		int arr[15][15] = { 0, };
		for (int j = 0; j < 15; j++) {
			arr[0][j] = j;
			arr[j][1] = 1;
		}
		for (int j = 1; j < 15; j++) {
			for (int l = 2; l < 15; l++) {
				arr[j][l] = arr[j - 1][l] + arr[j][l - 1];
			}
		}
		cout << arr[k][n] << endl;
	}

	return 0;
}