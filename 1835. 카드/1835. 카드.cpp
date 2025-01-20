#include <iostream>
#include <queue>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	int N;
	cin >> N;

	deque<int> dq;

	dq.push_back(N);
	for (int i = N - 1; i > 0; i--) {
		dq.push_front(i);
		for (int j = 0; j < i; j++) {
			dq.push_front(dq.back());
			dq.pop_back();
		}
	}
	while (!dq.empty()) {
		cout << dq.front() << ' ';
		dq.pop_front();
	}

	return 0;
}