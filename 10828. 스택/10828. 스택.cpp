#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	stack<int> s;
	int N;
	cin >> N;
	string command;

	for (int i = 0; i < N; i++) {
		cin >> command;
		if (command == "push") {
			int num;
			cin >> num;
			s.push(num);
		}
		else if (command == "pop") {
			if (s.empty()) {
				cout << -1 << "\n";
			}
			else {
				cout << s.top() << "\n";
				s.pop();
			}
		}
		else if (command == "size") {
			cout << s.size() << "\n";
		}
		else if (command == "empty") {
			cout << s.empty() << "\n";
		}
		else if (command == "top") {
			if (s.empty()) {
				cout << -1 << "\n";
			}
			else {
				cout << s.top() << "\n";
			}
		}
	}

	return 0;
}