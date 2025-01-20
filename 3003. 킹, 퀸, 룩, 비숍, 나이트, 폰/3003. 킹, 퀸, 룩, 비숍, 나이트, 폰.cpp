#include <iostream>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int K, Q, R, B, N, P;

	cin >> K >> Q >> R >> B >> N >> P;

	cout << 1 - K << ' ' << 1 - Q << ' ' << 2 - R << ' ' << 2 - B << ' ' << 2 - N << ' ' << 8 - P << '\n';

	return 0;
}