#include <iostream>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	int count = 0;

	cin >> N;

	for (int i = 666; ; i++) {
		int temp = i;
		while (temp >= 666) {
			if (temp % 1000 == 666) {
				count++;
				break;
			}
			temp /= 10;
		}
		if (count == N) {
			cout << i;
			break;
		}
	}


	return 0;
}