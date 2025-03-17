#include <iostream>

using namespace std;

void star(int n, int count) {
    if(count < 0) return;

    for(int i = 0; i < abs(n); i++) {
        cout << "* ";
    }
    if(abs(n) != 0) cout << endl;
    
    return star(n - 1, --count);
}

int main() {
    int n;
    cin >> n;

    star(n, n * 2);

    return 0;
}
