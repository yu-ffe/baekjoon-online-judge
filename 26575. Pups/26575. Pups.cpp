#include <iostream>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	double d, f, p;
	
	cin >> n;
	cout << fixed;
	cout.precision(2);
	for (int i = 0; i < n; i++) {
		cin >> d >> f >> p;
		cout << "$" << d * f * p << "\n";
	}

	return 0;
}