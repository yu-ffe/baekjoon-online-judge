#include <iostream>
#include <string>

#include <Windows.h>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	string s;

	N += 3071;
	s.push_back(N / 4096 + 234);
	s.push_back(N / 64 % 64 + 128);
	s.push_back(N % 64 + 128);

	cout << s;

	return 0;
}