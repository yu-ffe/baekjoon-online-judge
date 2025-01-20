#include <iostream>

using namespace std;

int main() {

	string s;
	cin >> s;

	for (int i = 97; i <= 122; i++) {
		cout << (int)s.find(i) << ' ';
	}

	return 0;
}