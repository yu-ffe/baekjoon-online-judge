﻿#include <iostream>
#include <string>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	for (int i = 0; i < 3; ++i) {
		string str;
		cin >> str;

		if (str[0] == 'F' || str[0] == 'B') {
			continue;
		}

		int num = stoi(str) + 3 - i;

		if (num % 3 && num % 5) {
			cout << num;
			break;
		}
		if (num % 3 == 0) {
			cout << "Fizz";
		}
		if (num % 5 == 0){
			cout << "Buzz";
		}
		break;
	}

	return 0;
}