#include <iostream>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	if (n == 0) {
		cout << 0;
		return 0;
	}

	int* arr = new int[n];
	double sum = 0;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	
	sort(arr, arr + n);

	double l = round((double)n * 0.15);
	for (int i = l; i < n - l; i++) {
		sum += arr[i];
	}

	cout << round(sum / (n - 2 * l));

	delete[] arr;

	return 0;
}