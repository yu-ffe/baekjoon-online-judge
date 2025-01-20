#include <iostream>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string s;
	cin >> s;
	
	int result = 0;
	int temp = 0;
	bool minus = false;

	for (int i = 0; i <= s.size(); i++) {
		if (s[i] == '+' || s[i] == '-' || s[i] == '\0') {
			if (minus) {
				result -= temp;
			}
			else {
				result += temp;
			}
			temp = 0;
			if (s[i] == '-') {
				minus = true;
			}
		}
		else {
			temp = temp * 10 + (s[i] - '0');
		}
	}

	cout << result << endl;

	return 0;
}