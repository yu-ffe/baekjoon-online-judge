#include <iostream>
#include <map>
#include <string>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	map<string, int> m1;
	string m2[100001];

	int n, m;
	cin >> n >> m;

	for (int i = 1; i <= n; i++) {
		string s;
		cin >> s;
		m1[s] = i;
		m2[i] = s;
	}

	for (int i = 0; i < m; i++) {
		string s;
		cin >> s;
		if (s[0] >= '0' && s[0] <= '9') {
			cout << m2[stoi(s)] << '\n';
		}
		else {
			cout << m1[s] << '\n';
		}
	}

	return 0;
}