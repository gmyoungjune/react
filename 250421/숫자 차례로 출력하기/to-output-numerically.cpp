#include <iostream>

using namespace std;

void printIncreasing(int n) {
    if (n == 0) {
        return;
    }
    printIncreasing(n - 1);
    cout << n << " ";
}

void printDecreasing(int n) {
    if (n == 0) {
        return;
    }
    cout << n << " ";
    printDecreasing(n - 1);
}


int N; 

int main() {
    cin >> N;

    printIncreasing(N);
    cout << endl;

    printDecreasing(N);
    cout << endl;

    return 0;
}
