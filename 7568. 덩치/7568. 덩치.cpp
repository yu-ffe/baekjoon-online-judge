#include <iostream>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	int* weight = new int[N];
	int* height = new int[N];
	int* rank = new int[N];

	for (int i = 0; i < N; i++) {
		cin >> weight[i] >> height[i];
		rank[i] = 1;
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (weight[i] < weight[j] && height[i] < height[j]) {
				rank[i]++;
			}
		}
	}

	for (int i = 0; i < N; i++) {
		cout << rank[i] << " ";
	}

	return 0;
}