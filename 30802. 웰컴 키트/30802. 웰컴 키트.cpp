#include <iostream>

using namespace std;

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

    int N, T, P, str[6], cnt = 0;

    cin >> N;

    for (int i = 0; i < 6; i++)
        cin >> str[i];

    cin >> T >> P;

    for (int i = 0; i < 6; i++)
        cnt += (str[i] / T + (str[i] % T > 0));

    cout << cnt << '\n';
    cout << N / P << " " << N % P << '\n';

	return 0;
}