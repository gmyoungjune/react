#include <iostream>

using namespace std;

void Printstar (int n) {
    if (n==0)
    return;
    cout << n << " ";
    Printstar(n-1);
    cout << n << " ";
}

int main() {

int n;
cin >> n;
Printstar(n);

return 0;
}