#include <iostream>
#include <vector> 
#include <algorithm> 

using namespace std;

int main() {
    int n;
    vector<int> arr;

    cin >> n;
    arr.resize(n); 

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    sort(arr.begin(), arr.end());

    for (int i = 0; i < n; i++) {
        cout << arr[i];
        if (i < n - 1) { 
            cout << " ";
        }
    }
    cout << endl;
    return 0;
}