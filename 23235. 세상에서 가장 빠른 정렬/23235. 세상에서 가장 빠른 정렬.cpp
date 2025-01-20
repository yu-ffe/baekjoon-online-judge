#include <iostream>
#include <string>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string line;
	int count = 1;

	while (getline(cin, line)) {
		if (line[0] == '0') break;
		cout << "Case " << count++ << ": Sorting... done!" << "\n";
	}

	return 0;
}