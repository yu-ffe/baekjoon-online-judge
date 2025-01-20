#include <iostream>
#include <algorithm>

using namespace std;

void binarySearch(long long int A[], long long  int N, long long int M) {
	long long int left = 0;
	long long int right = N - 1;
	long long int mid;
	while (left <= right) {
		mid = (left + right) / 2;
		if (A[mid] == M) {
			cout << "1\n";
			return;
		}
		else if (A[mid] < M) left = mid + 1;
		else right = mid - 1;
	}
	cout << "0\n";
}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	long long int A[100001];
	int M;
	long long int num;

	cin >> N;
	for (int i = 0; i < N; i++) cin >> A[i];

	sort(A, A + N);

	cin >> M;
	for (int i = 0; i < M; i++) {
		cin >> num;
		binarySearch(A, N, num);
	}

	return 0;
}