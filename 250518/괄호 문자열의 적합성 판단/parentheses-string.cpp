#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
   string input;
   cin >> input;
   
   stack<char> s;
   bool isValid = true;
   
   for (int i = 0; i < input.length(); i++) {
       if (input[i] == '(') {
           s.push('(');
       }
       else if (input[i] == ')') {
           if (s.empty()) {
               isValid = false;
               break;
           }
           s.pop();
       }
   }
   
   if (!s.empty()) {
       isValid = false;
   }
   
   cout << (isValid ? "Yes" : "No") << endl;
   
   return 0;
}

