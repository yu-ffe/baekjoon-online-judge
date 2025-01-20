#include <iostream>
#include <algorithm>

using namespace std;

struct Member {
	int age, idx;
	string name;
};

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	Member* member = new Member[N];
	for (int i = 0; i < N; i++) {
		cin >> member[i].age >> member[i].name;
		member[i].idx = i;
	}
	sort(member, member + N, [](Member a, Member b) {
		if (a.age == b.age) {
			return a.idx < b.idx;
		}
		return a.age < b.age;
		});
	for (int i = 0; i < N; i++) {
		cout << member[i].age << " " << member[i].name << "\n";
	}

	delete[] member;

	return 0;
}