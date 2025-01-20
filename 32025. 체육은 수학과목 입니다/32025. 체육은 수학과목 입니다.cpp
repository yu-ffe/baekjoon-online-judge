#include <iostream>

using namespace std;

int main(){
	int H, W;
	cin >> H >> W;
	int max = H < W ? H : W;
	cout << max * 50;
	return 0;
}