#include <iostream>
#include <queue>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T, N, M, num;
	queue<int> q;

	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> N >> M;
		int cnt = 0;
		priority_queue<int> pq;
		for (int j = 0; j < N; j++) {
			cin >> num;
			q.push(num);
			pq.push(num);
		}
		while (!q.empty()) {
			if (q.front() == pq.top()) {
				cnt++;
				if (M == 0) {
					cout << cnt << '\n';
					break;
				}
				q.pop();
				pq.pop();
				M--;
			}
			else {
				q.push(q.front());
				q.pop();
				M = (M == 0) ? q.size() - 1 : M - 1;
			}
		}
		while (!q.empty()) q.pop();
	}

	return 0;
}