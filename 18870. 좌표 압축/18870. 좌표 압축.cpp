#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	vector<pair<int, int>> v;

	cin >> N;
	int n;
	for (int i = 0; i < N; i++) {
		cin >> n;
		v.push_back({ n, i });
	}

	sort(v.begin(), v.end(), [](const pair<int, int>& a, const pair<int, int>& b) {
		return a.first < b.first;
	});

	int idx = 0;
	int changeCount = 0;
	for (int i = 0; i < N; i++) {
		if (i == 0) {
			idx = v[i].first;
			v[i].first = changeCount;
			continue;
		}
		if (idx == v[i].first) {
			v[i].first = changeCount;
		}
		else {
			changeCount++;
			idx = v[i].first;
			v[i].first = changeCount;
		}

	}

	sort(v.begin(), v.end(), [](pair<int, int> a, pair<int, int> b) {
		return a.second < b.second;
		});

	for (pair<int, int> a : v) {
		cout << a.first << " ";
	}

	return 0;
}