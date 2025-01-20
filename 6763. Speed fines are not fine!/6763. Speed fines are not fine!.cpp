#include <iostream>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int L, S;
	cin >> L >> S;

	if (S <= L) {
		cout << "Congratulations, you are within the speed limit!";
	}
	else if (S <= L + 20) {
		cout << "You are speeding and your fine is $100.";
	}
	else if (S <= L + 30) {
		cout << "You are speeding and your fine is $270.";
	}
	else {
		cout << "You are speeding and your fine is $500.";
	}

	return 0;
}