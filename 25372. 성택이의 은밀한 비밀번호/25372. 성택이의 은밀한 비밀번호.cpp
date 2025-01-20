#include <iostream>
#include <cstring> 

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	char str[1001];

	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> str;
		if(6 <= strlen(str) && strlen(str) <= 9)
			cout << "yes\n";
		else
			cout << "no\n";
	}

	return 0;
}