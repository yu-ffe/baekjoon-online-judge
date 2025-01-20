#include <iostream>

using namespace std;

int N, M, V;
int graph[1001][1001];
bool visited[1001];

void dfs(int start) {
	visited[start] = true;
	cout << start << " ";
	for (int i = 1; i <= N; i++) {
		if (graph[start][i] && !visited[i]) {
			dfs(i);
		}
	}
}

void bfs(int start) {
	int queue[1001];
	int front = 0, rear = 0;
	queue[rear++] = start;
	visited[start] = false;
	while (front < rear) {
		int current = queue[front++];
		cout << current << " ";
		for (int i = 1; i <= N; i++) {
			if (graph[current][i] && visited[i]) {
				queue[rear++] = i;
				visited[i] = false;
			}
		}
	}
}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> M >> V;
	for (int i = 0; i < M; i++) {
		int a, b;
		cin >> a >> b;
		graph[a][b] = graph[b][a] = 1;
	}

	dfs(V);
	cout << endl;
	bfs(V);

	return 0;
}