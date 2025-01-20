#include <iostream>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int UR, TR, UO, TO;

	cin >> UR >> TR >> UO >> TO;

	cout << UR * 56 + TR * 24 + UO * 14 + TO * 6;

	return 0;
}