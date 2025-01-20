#include <iostream>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int sum = 0;
	while(true) {
		int n;
		cin >> n;
		if (n == -1) break;
		sum += n;
	}
	cout << sum;

	return 0;
}