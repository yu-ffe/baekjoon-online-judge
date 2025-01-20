#include <iostream>

using namespace std;

int countOccurrences(const string& s, const string& target) {
	int count = 0;
	size_t pos = s.find(target);
	while (pos != string::npos) { 
		count++;
		pos = s.find(target, pos + target.length());
	}
	return count;
}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	string secu = "security";
	string bigd = "bigdata";

	string s;
	cin >> s;

	int secuCount = countOccurrences(s, secu);
	int bigdCount = countOccurrences(s, bigd);
	
	if (secuCount <= bigdCount) cout << "bigdata? ";
	if (secuCount >= bigdCount) cout << "security!";
	
	return 0;
}