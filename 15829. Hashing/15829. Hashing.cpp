#include <iostream>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int L;
	cin >> L;

	string str;
	cin >> str;

	long long result = 0;
	long long r = 1;
	for (int i = 0; i < L; i++) {
		result += (str[i] - 'a' + 1) * r;
		r = r * 31 % 1234567891;
		result %= 1234567891;
	}

	cout << result;

	return 0;
}