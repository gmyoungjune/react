#include <iostream>
#include <vector>
using namespace std;

int main() {
    int N;
    cin >> N;

    vector<int> arr;
    string command;

    for (int i = 0; i < N; i++) {
        cin >> command;
        
        if (command == "push_back") {
            int A;
            cin >> A;
            arr.push_back(A);
        } 
        else if (command == "pop_back") {
            if (!arr.empty()) {
                arr.pop_back();
            }
        } 
        else if (command == "size") {
            cout << arr.size() << endl;
        } 
        else if (command == "get") {
            int k;
            cin >> k;
            if (k >= 0 && k < arr.size()) {
                cout << arr[k] << endl;
            }
        }
    }
    return 0;
}
