#include <iostream>

using namespace std;

int N, r, c;
int cnt = 0;

void input() {
	cin >> N >> r >> c;
}

void dfs(int n, int x, int y) {
	if (x == r && y == c) {
		cout << cnt << "\n";
		return;
	}
	if (r < x || r >= x + n || c < y || c >= y + n) {
		cnt += n * n;
		return;
	}
	dfs(n / 2, x, y);
	dfs(n / 2, x, y + n / 2);
	dfs(n / 2, x + n / 2, y);
	dfs(n / 2, x + n / 2, y + n / 2);
}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	input();
	dfs(1 << N, 0, 0);

	return 0;
}