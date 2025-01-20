#include <iostream>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	int i = 1;
	while (N > i) {
		N -= i;
		i++;
	}

	if (i % 2 == 0) {
		cout << N << "/" << i - N + 1;
	}
	else {
		cout << i - N + 1 << "/" << N;
	}

	return 0;
}