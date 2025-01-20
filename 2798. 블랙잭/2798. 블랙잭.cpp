#include <iostream>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	int arr[100];
	int max = 0;

	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	for (int i = 0; i < N - 2; i++) {
		for (int j = i + 1; j < N - 1; j++) {
			for (int k = j + 1; k < N; k++) {
				int sum = arr[i] + arr[j] + arr[k];
				if (sum <= M && sum > max) {
					max = sum;
				}
			}
		}
	}

	cout << max << endl;

	return 0;
}