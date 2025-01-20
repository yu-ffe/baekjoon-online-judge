#include <iostream>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	int cnt = 0;
	cin >> N;

	for (int i = 5; i <= N; i *= 5) {
		cnt += N / i;
	}

	cout << cnt;

	return 0;
}