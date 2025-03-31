#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<int> stack; 
    
    for (int i = 0; i < N; i++) {
        string command;
        cin >> command;
        
        if (command == "push_back") {
            int A;
            cin >> A;
            stack.push_back(A);  
        } 
        else if (command == "pop_back") {
            if (!stack.empty()) {
                stack.pop_back(); 
            }
        } 
        else if (command == "size") {
            cout << stack.size() << "\n";  
        } 
        else if (command == "get") {
            int k;
            cin >> k;
            if (k >= 1 && k <= stack.size()) {
                cout << stack[k-1] << "\n";  }
        }
    }
    
    return 0;
}