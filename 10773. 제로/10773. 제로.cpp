﻿#include <iostream>
#include <stack>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	stack<int> s;
	int num;
	for (int i = 0; i < N; i++) {
		cin >> num;
		if (num == 0) {
			s.pop();
		}
		else {
			s.push(num);
		}
	}

	int sum = 0;
	while (!s.empty()) {
		sum += s.top();
		s.pop();
	}

	cout << sum;

	return 0;
}