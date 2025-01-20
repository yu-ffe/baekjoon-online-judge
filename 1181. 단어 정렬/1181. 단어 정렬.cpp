#include <iostream>
#include <algorithm>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	string words[20000];

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> words[i];
	}

	sort(words, words + N, [](string a, string b) {
		if (a.length() == b.length()) return a < b;
		else return a.length() < b.length();
		});

	for (int i = 0; i < N; i++) {
		if (i == 0) cout << words[i] << '\n';
		else if (words[i] != words[i - 1]) cout << words[i] << '\n';
	}

	return 0;
}