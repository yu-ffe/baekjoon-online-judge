#include <iostream>
#include <queue>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, K;
	cin >> N >> K;

	deque<int> dq;
	for (int i = 1; i <= N; i++) {
		dq.push_back(i);
	}

	cout << "<";
	while (true) {
		for (int i = 0; i < K - 1; i++) {
			dq.push_back(dq.front());
			dq.pop_front();
		}
		cout << dq.front();
		dq.pop_front();
		if (dq.empty()) break;
		else cout << ", ";
	}
	cout << ">";

	return 0;
}