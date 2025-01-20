#include <iostream>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	if (N == 1) cout << "*";
	else if (N % 2) for (int i = 0; i < N / 2 + 2; i++) {
		for (int j = 0; j < N; j++) {
			if (i == 0 || N / 2 + i - j - 1 == 0 || N / 2 - i - j + 1 == 0) cout << "*";
			else if (N / 2 + i - j == 0) {
				break;
			}
			else cout << " ";
		}
		cout << '\n';
	}
	else cout << "I LOVE CBNU";

	return 0;
}