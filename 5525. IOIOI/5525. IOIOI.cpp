#include <iostream>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	cin >> N >> M;

	string S;
	cin >> S;

	int cnt = 0;
	int ans = 0;

	for (int i = 0; i < M - 2; i++) {
		if (S[i] == 'I' && S[i + 1] == 'O' && S[i + 2] == 'I') {
			cnt++;
			if (cnt == N) {
				cnt--;
				ans++;
			}
			i++;
		}
		else {
			cnt = 0;
		}
	}

	cout << ans;

	return 0;
}	