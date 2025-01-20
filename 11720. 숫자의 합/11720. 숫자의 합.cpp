#include <iostream>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	string s;
	int sum = 0;

	cin >> N >> s;

	for (int i = 0; i < N; i++) {
		sum += s[i] - '0';
	}

	cout << sum;

	return 0;
}