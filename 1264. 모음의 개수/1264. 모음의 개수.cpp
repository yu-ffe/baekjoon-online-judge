#include <iostream>
#include <string>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	char vowel[] = { 'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U' };
	string str;
	while (true) {
		getline(cin, str);
		if (str == "#") break;
		int cnt = 0;
		for (char c : vowel) {
			for (char s : str) {
				if (c == s) cnt++;
			}
		}
		cout << cnt << '\n';
	}
	return 0;
}