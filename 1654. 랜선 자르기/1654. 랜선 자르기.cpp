#include <iostream>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int K, N;
	long long int lan[10000];
	long long int left = 1;
	long long int right = 2147483647;
	long long int max = 0;

	cin >> K >> N;
	for (int i = 0; i < K; i++) {
		cin >> lan[i];
	}	

	while (left <= right) {
		long long int mid = (left + right) / 2;
		int count = 0;
		for (int i = 0; i < K; i++) {
			count += lan[i] / mid;
		}
		if (count >= N) {
			if (mid > max) max = mid;
			left = mid + 1;
		}
		else right = mid - 1;
	}

	cout << max;

	return 0;
}