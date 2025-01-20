#include <iostream>

using namespace std;

int dx[4] = { 0, 0, -1, 1 };
int dy[4] = { -1, 1, 0, 0 };

int sum = 0;

int N, M;
char map[601][601];

void dfs(int x, int y) {

	for (int i = 0; i < 4; i++) {
		int nx = x + dx[i];
		int ny = y + dy[i];
		if (nx < 0 || nx >= N || ny < 0 || ny >= M) {
			continue;
		}
		if (map[nx][ny] == 'X') {
			continue;
		}
		if (map[nx][ny] == 'P') {
			sum++;
		}
		map[nx][ny] = 'X';
		dfs(nx, ny);
	}

}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int x, y;
	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> map[i][j];
			if (map[i][j] == 'I') {
				x = i;
				y = j;
			}
		}
	}

	dfs(x, y);

	if (sum == 0) {
		cout << "TT";
	}
	else {
		cout << sum;
	}

	return 0;
}