#include <iostream>
#include<stack>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, num;
	stack<int> s;
	string str = "";

	int sc = 1;
	s.push(0);

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> num;
		while (s.top() < num) {
			s.push(sc++);
			str += "+\n";
		}
		if (s.top() == num) {
			s.pop();
			str += "-\n";
		}
		else {
			cout << "NO";
			return 0;
		}
	}

	cout << str;

	return 0;
}