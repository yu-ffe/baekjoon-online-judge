#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	vector<pair<int, int>> v(N);

	for (int i = 0; i < N; i++) {
		cin >> v[i].first >> v[i].second;
	}

	sort(v.begin(), v.end(), [](pair<int, int> a, pair<int, int> b) {
		if (a.second == b.second) {
			return a.first < b.first;
		}
		else {
			return a.second < b.second;
		}
		});

	for (int i = 0; i < N; i++) {
		cout << v[i].first << " " << v[i].second << "\n";
	}

	return 0;
}