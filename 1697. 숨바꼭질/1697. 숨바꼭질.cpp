#include <iostream>
#include <queue>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, k;
	cin >> n >> k;

	queue<int> q;
	int visited[100001] = { 0, };
	q.push(n);
	visited[n] = 1;

	while (!q.empty()) {
		int x = q.front();
		q.pop();
		if (x == k) {
			cout << visited[x] - 1;
			break;
		}
		if (x - 1 >= 0 && !visited[x - 1]) {
			q.push(x - 1);
			visited[x - 1] = visited[x] + 1;
		}
		if (x + 1 <= 100000 && !visited[x + 1]) {
			q.push(x + 1);
			visited[x + 1] = visited[x] + 1;
		}
		if (x * 2 <= 100000 && !visited[x * 2]) {
			q.push(x * 2);
			visited[x * 2] = visited[x] + 1;
		}
	}	


	return 0;
}