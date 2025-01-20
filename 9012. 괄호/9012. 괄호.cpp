#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string str;
	int T;

	cin >> T;
	cin.ignore();

	for (int i = 0; i < T; i++) {
		getline(cin, str);
		stack<char> s;
		bool flag = true;
		for (int i = 0; i < str.length(); i++) {
			if (str[i] == '(') {
				s.push(str[i]);
			}
			else if (str[i] == ')') {
				if (s.empty() || s.top() != '(') {
					flag = false;
					break;
				}
				s.pop();
			}
		}
		if (flag && s.empty()) {
			cout << "YES" << endl;
		}
		else {
			cout << "NO" << endl;
		}
	}

	return 0;
}