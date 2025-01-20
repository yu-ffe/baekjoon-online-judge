#include <iostream>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int K;
	cin >> K;

	int h;
	string s;

	for (int i = 0; i < K; i++) {
		cin >> h;
		cin >> s;
		cout << "Data Set " << i + 1 << ":\n";
		for (int j = 0; j < s.length(); j++) {
			if (s[j] == 'c') h++;
			else h--;
			if (h == 0) break;
		}
		cout << h << "\n\n";
	}

	return 0;
}