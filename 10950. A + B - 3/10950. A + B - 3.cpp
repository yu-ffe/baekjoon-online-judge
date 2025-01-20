#include <iostream>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	int A, B;

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> A >> B;
		cout << A + B << '\n';
	}

	return 0;
}