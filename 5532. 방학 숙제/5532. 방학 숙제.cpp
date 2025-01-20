#include <iostream>
#include <cmath>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int L, A, B, C, D;

	cin >> L >> A >> B >> C >> D;

	cout << L - max(ceil((double)A / C), ceil((double)B / D));

	return 0;
}