#include <iostream>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int A, B, V;

	cin >> A >> B >> V;

	int day = (V - B - 1) / (A - B) + 1;

	cout << day << endl;

	return 0;
}