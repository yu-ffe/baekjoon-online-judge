#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
#include <stack>
#include <string>
#include <map>
#include <set>
#include <cmath>
#include <cstring>
#include <climits>
#include <functional>
#include <bitset>
#include <unordered_map>
#include <unordered_set>
#include <list>
#include <deque>
#include <sstream>
#include <iomanip>
#include <fstream>
#include <numeric>
#include <iterator>
#include <array>
#include <tuple>
#include <regex>
#include <forward_list>
#include <random>
#include <chrono>
#include <thread>
#include <mutex>
#include <condition_variable>
#include <cinttypes>
#include <cctype>
#include <clocale>
#include <csignal>
#include <csetjmp>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cwchar>
#include <cwctype>
#include <ctime>
#include <ccomplex>
#include <cfenv>

using namespace std;

int max_height_of_avl(long long V) {
    vector<long long> f = { 0, 1 }; 
    while (true) {
        long long next_f = f[f.size() - 1] + f[f.size() - 2] + 1;  
        if (next_f > V) {
            break;
        }
        f.push_back(next_f);
    }
    return f.size() - 1;
}

int main() {

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        long long V;
        cin >> V;
        cout << max_height_of_avl(V) << endl;
    }

	return 0;
}