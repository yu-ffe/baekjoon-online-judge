#include <iostream>

using namespace std;

int main(){
	long long N;
	cin >> N;
	long long result = 1;
	for (long long i = 1; i <= N; i++) {
		result *= i;
	}
	cout << result;
	return 0;
}
