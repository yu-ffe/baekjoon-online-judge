#include <iostream>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int H, I;
	int A, R, C;

	cin >> H >> I;
	cin >> A >> R >> C;

	cout << H * I - A * R * C;

	return 0;
}