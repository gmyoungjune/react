#include <iostream>

using namespace std;

int n;
int arr[10];

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

int lcm(int a, int b) {
    return a * b / gcd(a, b);
}

int findLCM(int index) {
    if (index == n - 1) {
        return arr[index];
    }
    
    return lcm(arr[index], findLCM(index + 1));
}

int main() {
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    
    int result = findLCM(0);
    cout << result;
    
    return 0;
}
