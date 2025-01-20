#include <iostream>
#include <string>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string line;

	while (getline(cin, line)) {
		if (line[0] == '0') break;
		cout << line << "\n";
	}

	return 0;
}