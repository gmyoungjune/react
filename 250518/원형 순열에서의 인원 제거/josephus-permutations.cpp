#include <iostream>
#include <queue>
using namespace std;

int N, K;

int main() {
   cin >> N >> K;
   
   queue<int> q;
   
   for (int i = 1; i <= N; i++) {
       q.push(i);
   }
   
   while (!q.empty()) {
       for (int i = 0; i < K - 1; i++) {
           q.push(q.front());
           q.pop();
       }
       
       if (q.size() == 1) {
           cout << q.front();
       } else {
           cout << q.front() << " ";
       }
       q.pop();
   }
   
   return 0;
}