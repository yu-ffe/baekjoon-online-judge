#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <cmath>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;
	vector<int> arr(N);

	for (int i = 0; i < N; i++) cin >> arr[i];

	int sum = 0;
	for (int i = 0; i < N; i++) sum += arr[i];
	cout << round((double)sum / N) + 0.0 << "\n";

	sort(arr.begin(), arr.end());
	cout << arr[N / 2] << "\n";

	map<int, int> freq;
	for (int i = 0; i < N; i++) freq[arr[i]]++;

	int maxFreq = 0;
	vector<int> modes;
	for (auto& entry : freq) {
		if (entry.second > maxFreq) {
			maxFreq = entry.second;
			modes = { entry.first };
		}
		else if (entry.second == maxFreq) {
			modes.push_back(entry.first);
		}
	}
	sort(modes.begin(), modes.end());
	if (modes.size() > 1) {
		cout << modes[1] << "\n"; 
	}
	else {
		cout << modes[0] << "\n";
	}

	int max = -4001, min = 4001;
	for (int i = 0; i < N; i++) {
		if (arr[i] > max) max = arr[i];
		if (arr[i] < min) min = arr[i];
	}
	cout << max - min;

	return 0;
}