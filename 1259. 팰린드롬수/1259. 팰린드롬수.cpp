#include <iostream>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;

	while (1) {
		cin >> N;
		if (N == 0) break;
		int temp = N;
		int reverse = 0;
		while (temp > 0) {
			reverse = reverse * 10 + temp % 10;
			temp /= 10;
		}
		if (N == reverse) cout << "yes\n";
		else cout << "no\n";
	}

	return 0;
}