#include <iostream>
#include <vector>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int M;
	cin >> M;

	vector<int> S;

	for (int i = 0; i < M; i++) {
		string cmd;
		cin >> cmd;
		if (cmd == "add") {
			int x;
			cin >> x;
			if (find(S.begin(), S.end(), x) == S.end()) S.push_back(x);
		}
		else if (cmd == "remove") {
			int x;
			cin >> x;
			auto it = find(S.begin(), S.end(), x);
			if (it != S.end()) S.erase(it);
		}
		else if (cmd == "check") {
			int x;
			cin >> x;
			if (find(S.begin(), S.end(), x) == S.end()) cout << 0 << '\n';
			else cout << 1 << '\n';
		}
		else if (cmd == "toggle") {
			int x;
			cin >> x;
			auto it = find(S.begin(), S.end(), x);
			if (it == S.end()) S.push_back(x);
			else S.erase(it);
		}
		else if (cmd == "all") {
			S.clear();
			for (int i = 1; i <= 20; i++) S.push_back(i);
		}
		else if (cmd == "empty") {
			S.clear();
		}
	}

	return 0;
}