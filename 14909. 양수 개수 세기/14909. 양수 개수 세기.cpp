#include <iostream>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int cnt = 0;
	while (true) {
		int x;
		cin >> x;
		if (cin.eof()) {
			break;
		}
		if (x > 0) {
			cnt++;
		}
	}

	cout << cnt;

	return 0;
}