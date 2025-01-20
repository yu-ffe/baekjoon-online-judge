#include <iostream>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int M, N;
	cin >> M >> N;

	bool* arr = new bool[N + 1];

	for (int i = 2; i <= N; i++) arr[i] = true;
	for (int i = 2; i * i <= N; i++) {
		if (arr[i]) {
			for (int j = i * i; j <= N; j += i) arr[j] = false;
		}
	}

	for (int i = M; i <= N; i++) {
		if (arr[i]) cout << i << "\n";
	}

	delete[] arr;

	return 0;
}