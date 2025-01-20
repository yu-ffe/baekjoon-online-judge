#include <iostream>

#define endl '\n'

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	
	cin >> N;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < N; j++) {
			if (i >= j) {
				cout << '*';
			}
		}
		cout << endl;
	}
}