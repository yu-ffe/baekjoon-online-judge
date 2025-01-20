#include <iostream>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	int i = 1;

	cin >> N;

	while (N > 1) {
		N -= 6 * i;
		i++;
	}

	cout << i << endl;

	return 0;
}