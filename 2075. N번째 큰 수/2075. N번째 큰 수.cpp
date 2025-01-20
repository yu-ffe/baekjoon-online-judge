#include <iostream>
#include <queue>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;
	vector<int> pq;

	for (int j = 0; j < N; j++) {
		int x;
		cin >> x;
		pq.push_back(x);
	}

	for (int i = 0; i < N - 1; i++) {
		for (int j = 0; j < N; j++) {
			int x;
			cin >> x;
			pq.push_back(x);
		}
		sort(pq.begin(), pq.end());
		pq.erase(pq.begin(), pq.begin() + pq.size() / 2);
	}
	
	cout << pq[pq.size() - N];

	return 0;
}