#include <iostream>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int P;
	cin >> P;
	int K, N;
	for (int i = 0; i < P; i++) {
		cin >> K >> N;
		cout << K << ' ' << N * (N + 1) / 2 << ' ' << N * N << ' ' << N * (N + 1) << '\n';
	}

	return 0;
}