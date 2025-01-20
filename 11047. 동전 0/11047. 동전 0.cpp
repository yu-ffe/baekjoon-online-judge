#include <iostream>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, K;
	int arr[10];

	cin >> N >> K;
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	int count = 0;
	for (int i = N - 1; i >= 0; i--) {
		count += K / arr[i];
		K %= arr[i];
	}

	cout << count;

	return 0;
}