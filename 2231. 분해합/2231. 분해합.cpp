#include <iostream>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	
	cin >> N;

	for (int i = 1; i < N; i++) {
		int sum = i;
		int temp = i;
		while (temp) {
			sum += temp % 10;
			temp /= 10;
		}
		if (sum == N) {
			cout << i << endl;
			return 0;
		}
	}

	cout << 0 << endl;

	return 0;
}