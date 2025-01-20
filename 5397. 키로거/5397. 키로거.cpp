#include <iostream>
#include <stack>
#include <string>
#include <list>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int L;
	cin >> L;

	for (int i = 0; i < L; i++) {
		list<char> password = {};
		list<char>::iterator cursor = password.begin();
		string input;
		cin >> input;

		for (auto c : input) {
			if (c == '<') {
				if (cursor != password.begin()) {
					cursor--;
				}
			}
			else if (c == '>') {
				if (cursor != password.end()) {
					cursor++;
				}
			}
			else if (c == '-') {
				if (cursor != password.begin()) {
					cursor = password.erase(--cursor);
				}
			}
			else {
				password.insert(cursor, c);
			}
		}

		for (auto c : password) {
			cout << c;
		}
		cout << '\n';
	}

	return 0;
}