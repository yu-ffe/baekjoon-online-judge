#include <iostream>

using namespace std;

void bfs(int map[1001][1001], int visited[1001], int N, int start) {
	visited[start] = 1;
	for (int i = 1; i <= N; i++) {
		if (map[start][i] == 1 && visited[i] == 0) {
			bfs(map, visited, N, i);
		}
	}
}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	cin >> N >> M;

	int map[1001][1001] = { 0, };
	int visited[1001] = { 0, };

	for (int i = 0; i < M; i++) {
		int a, b;
		cin >> a >> b;
		map[a][b] = 1;
		map[b][a] = 1;
	}

	int count = 0;
	for (int i = 1; i <= N; i++) {
		if (visited[i] == 0) {
			bfs(map, visited, N, i);
			count++;
		}
	}

	cout << count;

	return 0;
}