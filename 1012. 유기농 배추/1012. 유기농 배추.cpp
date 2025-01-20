#include <iostream>

using namespace std;

void dfs(int x, int y, int M, int N, int map[50][50], bool visited[50][50]) {
	visited[x][y] = true;
	if (x - 1 >= 0 && map[x - 1][y] == 1 && !visited[x - 1][y])
		dfs(x - 1, y, M, N, map, visited);
	if (x + 1 < M && map[x + 1][y] == 1 && !visited[x + 1][y])
		dfs(x + 1, y, M, N, map, visited);
	if (y - 1 >= 0 && map[x][y - 1] == 1 && !visited[x][y - 1])
		dfs(x, y - 1, M, N, map, visited);
	if (y + 1 < N && map[x][y + 1] == 1 && !visited[x][y + 1])
		dfs(x, y + 1, M, N, map, visited);
}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T, M, N, K, x, y, cnt;

	cin >> T;

	for (int i = 0; i < T; i++) {
	
		cin >> M >> N >> K;
		
		int map[50][50] = { 0, };
		bool visited[50][50] = { false, };
		
		for (int j = 0; j < K; j++) {
			cin >> x >> y;
			map[x][y] = 1;
		}
		
		cnt = 0;

		for (int j = 0; j < M; j++) {
			for (int k = 0; k < N; k++) {
				if (map[j][k] == 1 && !visited[j][k]) {
					dfs(j, k, M, N, map, visited);
					cnt++;
				}
			}
		}

		cout << cnt << '\n';
		
	}

	return 0;
}