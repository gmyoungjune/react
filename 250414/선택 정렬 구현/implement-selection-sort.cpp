#include <iostream>
#include <utility> 

using namespace std;

int main() {
    int n;
    int arr[101];
    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < n - 1; i++) {
        int min_idx = i; 
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }

        if (min_idx != i) {
             swap(arr[i], arr[min_idx]); 
        }
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i];
        if (i < n - 1) { 
            cout << " ";
        }
    }
    cout << endl; 
    return 0;
}