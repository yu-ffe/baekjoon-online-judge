#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int K;
int swap_count = 0;
pair<int, int> result = { -1, -1 };

void partition(vector<int>& arr, int left, int right, int& pivot) {
    int low = left - 1;
    int high = left;

    int pivot_value = arr[right];

    for (int j = left; j < right; j++) {
        if (arr[j] <= pivot_value) {
            low++;
            swap(arr[low], arr[j]);
            swap_count++;
            if (swap_count == K) {
                result = { min(arr[low], arr[j]), max(arr[low], arr[j]) };
            }
        }
    }

    if (low + 1 != right) {
        swap(arr[low + 1], arr[right]);
        swap_count++;
        if (swap_count == K) {
            result = { min(arr[low + 1], arr[right]), max(arr[low + 1], arr[right]) };
        }
    }

    pivot = low + 1;
}

void quick_sort(vector<int>& arr, int left, int right) {
    if (left < right) {
        int pivot;
        partition(arr, left, right, pivot);

        quick_sort(arr, left, pivot - 1);
        quick_sort(arr, pivot + 1, right);
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int N;
    cin >> N >> K;

    vector<int> arr(N);
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    quick_sort(arr, 0, N - 1);

    if (result.first == -1) {
        cout << -1 << endl;
    }
    else {
        cout << result.first << " " << result.second << endl;
    }

    return 0;
}
