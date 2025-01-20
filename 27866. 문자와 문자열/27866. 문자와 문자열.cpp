#include <iostream>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string s;
	int index;

	cin >> s;
	cin >> index;

	cout << s[index - 1];

	return 0;
}