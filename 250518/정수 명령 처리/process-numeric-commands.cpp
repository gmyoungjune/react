#include <iostream>
using namespace std;

int N;
string command[10000];
int value[10000];

int main() {
    cin >> N;
    
    for (int i = 0; i < N; i++) {
        cin >> command[i];
        if (command[i] == "push") {
            cin >> value[i];
        }
    }
    
    // Please write your code here.
    int stack[100000];
    int stackSize = 0;
    
    for (int i = 0; i < N; i++) {
        if (command[i] == "push") {
            stack[stackSize++] = value[i];
        }
        else if (command[i] == "pop") {
            if (stackSize > 0) {
                cout << stack[stackSize - 1] << "\n";
                stackSize--;
            }
            else {
                cout << -1 << "\n";
            }
        }
        else if (command[i] == "size") {
            cout << stackSize << "\n";
        }
        else if (command[i] == "empty") {
            cout << (stackSize == 0 ? 1 : 0) << "\n";
        }
        else if (command[i] == "top") {
            if (stackSize > 0) {
                cout << stack[stackSize - 1] << "\n";
            }
            else {
                cout << -1 << "\n";
            }
        }
    }
    
    return 0;
}