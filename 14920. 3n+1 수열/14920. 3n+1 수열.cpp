#include <iostream>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int c;
	cin >> c;

	int cnt = 0;

	while (c != 1) {
		if (c % 2 == 0) c /= 2;
		else c = 3 * c + 1;
		cnt++;
	}

	cout << cnt + 1;

	return 0;
}