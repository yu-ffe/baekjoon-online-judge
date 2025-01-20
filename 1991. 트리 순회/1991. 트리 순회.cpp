#include <iostream>

using namespace std;

pair<char, char> node[26];

void preOrder(char c) {
	cout << c;
	if (node[c - 'A'].first != '.') preOrder(node[c - 'A'].first);
	if (node[c - 'A'].second != '.') preOrder(node[c - 'A'].second);
}

void inOrder(char c) {
	if (node[c - 'A'].first != '.') inOrder(node[c - 'A'].first);
	cout << c;
	if (node[c - 'A'].second != '.') inOrder(node[c - 'A'].second);
}

void postOrder(char c) {
	if (node[c - 'A'].first != '.') postOrder(node[c - 'A'].first);
	if (node[c - 'A'].second != '.') postOrder(node[c - 'A'].second);
	cout << c;
}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	for (int i = 0; i < N; i++) {
		char a, b, c;
		cin >> a >> b >> c;
		node[a - 'A'] = { b, c };
	}

	preOrder('A');
	cout << '\n';
	inOrder('A');
	cout << '\n';
	postOrder('A');

	return 0;
}