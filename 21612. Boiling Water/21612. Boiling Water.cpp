#include <iostream>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int B;

	cin >> B;

	cout << 5 * B - 400 << '\n';
	cout << (B == 100 ? 0 : B > 100 ? -1 : 1);

	return 0;
}