#include <iostream>

using namespace std;

int main() {

	int T;

	cin >> T;

	for (int i = 0; i < T; i++) {
		string s;
		cin >> s;
		int score = 0;
		int cnt = 0;
		for (int j = 0; j < s.length(); j++) {
			if (s[j] == 'O') {
				cnt++;
				score += cnt;
			}
			else {
				cnt = 0;
			}
		}
		cout << score << '\n';
	}

	return 0;
}