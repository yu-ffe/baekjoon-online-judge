#include <iostream>
#include <queue>
#include <vector>
#include <cmath>

using namespace std;

// 사용자 정의 비교 함수
struct Compare {
    bool operator()(pair<int, bool> a, pair<int, bool> b) {
        // 절대값이 더 작은 것을 우선
        if (a.first == b.first) {
            // 절대값이 같다면 음수를 우선
            return a.second < b.second;
        }
        return a.first > b.first; // 절대값 기준 오름차순
    }
};

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int N;
    cin >> N;

    // 최소 힙으로 구성된 priority_queue
    priority_queue<pair<int, bool>, vector<pair<int, bool>>, Compare> pq;

    for (int i = 0; i < N; i++) {
        int x;
        cin >> x;

        if (x == 0) {
            if (pq.empty()) {
                cout << 0 << '\n';
            }
            else {
                pair<int, bool> temp = pq.top();
                // 출력: 음수 여부에 따라 부호 추가
                cout << (temp.second == true ? "-" : "") << temp.first << '\n';
                pq.pop();
            }
        }
        else {
            // 힙에 삽입 (절대값, 부호)
            pq.push(make_pair(abs(x), x < 0 ? true : false));
        }
    }

    return 0;
}
