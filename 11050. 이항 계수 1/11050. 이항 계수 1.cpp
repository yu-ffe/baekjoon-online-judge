#include <iostream>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, K;
	cin >> N >> K;

	int result = 1;

	for (int i = 0; i < K; i++) {
		result *= N - i;
	}
	for (int i = 0; i < K; i++) {
		result /= K - i;
	}

	cout << result;

	return 0;
}