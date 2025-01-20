#include <iostream>
#include <algorithm>
#include <map>
#include <string>
#include <vector>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	cin >> N >> M;

	map<string, bool> m;
	vector<string> v;
	string s;
	for (int i = 0; i < N; i++) {
		cin >> s;
		m[s] = true;
	}

	int cnt = 0;
	for (int i = 0; i < M; i++) {
		cin >> s;
		if (m[s]) {
			++cnt;
			v.push_back(s);
		}
	}
	
	cout << cnt;
	sort(v.begin(), v.end());
	for (int i = 0; i < v.size(); i++) {
		cout << '\n' << v[i];
	}

	return 0;
}