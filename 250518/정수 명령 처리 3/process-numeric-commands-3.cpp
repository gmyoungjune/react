#include <iostream>
#include <string>
#include <deque>
using namespace std;

int N;
string cmd[10000];
int num[10000];

int main() {
   cin >> N;
   
   for (int i = 0; i < N; i++) {
       cin >> cmd[i];
       if (cmd[i] == "push_front" || cmd[i] == "push_back") {
           cin >> num[i];
       }
   }
   
   deque<int> dq;
   
   for (int i = 0; i < N; i++) {
       if (cmd[i] == "push_front") {
           dq.push_front(num[i]);
       } 
       else if (cmd[i] == "push_back") {
           dq.push_back(num[i]);
       } 
       else if (cmd[i] == "pop_front") {
           if (dq.empty()) {
               cout << -1 << "\n";
           } else {
               cout << dq.front() << "\n";
               dq.pop_front();
           }
       } 
       else if (cmd[i] == "pop_back") {
           if (dq.empty()) {
               cout << -1 << "\n";
           } else {
               cout << dq.back() << "\n";
               dq.pop_back();
           }
       } 
       else if (cmd[i] == "size") {
           cout << dq.size() << "\n";
       } 
       else if (cmd[i] == "empty") {
           cout << (dq.empty() ? 1 : 0) << "\n";
       } 
       else if (cmd[i] == "front") {
           if (dq.empty()) {
               cout << -1 << "\n";
           } else {
               cout << dq.front() << "\n";
           }
       } 
       else if (cmd[i] == "back") {
           if (dq.empty()) {
               cout << -1 << "\n";
           } else {
               cout << dq.back() << "\n";
           }
       }
   }
   
   return 0;
}