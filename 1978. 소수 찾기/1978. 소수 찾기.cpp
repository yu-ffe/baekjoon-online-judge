#include <iostream>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	int cnt = 0;

	cin >> N;

	for (int i = 0; i < N; i++) {
		int num;
		cin >> num;
		if (num == 1) continue;
		bool isPrime = true;
		for (int j = 2; j * j <= num; j++) {
			if (num % j == 0) {
				isPrime = false;
				break;
			}
		}
		if (isPrime) cnt++;
	}

	cout << cnt;

	return 0;
}