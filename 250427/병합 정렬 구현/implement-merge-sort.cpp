#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n;
int arr[100001];

int partition(int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j <= high - 1; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}

void quick_sort(int low, int high) {
    if (low < high) {
        int pos = partition(low, high);

        quick_sort(low, pos - 1);
        quick_sort(pos + 1, high);
    }
}

int main() {
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    quick_sort(0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}