#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string str;
	while (true) {
		getline(cin, str);
		if (str == ".") {
			break;
		}
		stack<char> s;
		bool flag = true;
		for (int i = 0; i < str.length(); i++) {
			if (str[i] == '(' || str[i] == '[') {
				s.push(str[i]);
			}
			else if (str[i] == ')') {
				if (s.empty() || s.top() != '(') {
					flag = false;
					break;
				}
				s.pop();
			}
			else if (str[i] == ']') {
				if (s.empty() || s.top() != '[') {
					flag = false;
					break;
				}
				s.pop();
			}
		}
		if (flag && s.empty()) {
			cout << "yes" << endl;
		}
		else {
			cout << "no" << endl;
		}
	}

	return 0;
}