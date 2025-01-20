#include <iostream>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long n;
	cin >> n;

	long long int sum = 0, s = 1;
	while (n) {
		if (n & 1) {
			sum += s;
		}
		s *= 3;
		n >>= 1;
	}

	cout << sum;

	return 0;
}