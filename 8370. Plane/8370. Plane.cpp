#include <iostream>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n1, k1, n2, k2;

	cin >> n1 >> k1 >> n2 >> k2;

	cout << n1 * k1 + n2 * k2;

	return 0;
}