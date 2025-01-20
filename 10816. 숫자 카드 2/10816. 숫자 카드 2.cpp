#include <iostream>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	int* arr = new int[20000001]();
	int num;

	for (int i = 0; i < N; i++) {
		cin >> num;
		arr[num + 10000000]++;
	}

	int M;
	cin >> M;

	for (int i = 0; i < M; i++) {
		cin >> num;
		cout << arr[num + 10000000] << " ";
	}

	delete[] arr;

	return 0;
}