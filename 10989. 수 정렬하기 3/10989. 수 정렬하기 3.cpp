#include <iostream>
#include <string>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	int* arr = new int[10001]();
	int num;

	for (int i = 0; i < N; i++) {
		cin >> num;
		arr[num]++;
	}
	
	for (int i = 0; i < 10001; i++) {
		for (int j = 0; j < arr[i]; j++) {
			cout << i << "\n";
		}
	}
	
	delete[] arr;

	return 0;
}