#include <iostream>

using namespace std;

int main() {
	bool num[42] = { 0, };
	int n, cnt = 0;
	for (int i = 0; i < 10; i++) {
		cin >> n;
		num[n % 42] = true;
	}
	for (int i = 0; i < 42; i++) {
		if (num[i]) cnt++;
	}
	cout << cnt;
	return 0;
}