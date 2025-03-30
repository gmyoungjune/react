#include <iostream>
#include <vector>

int findMax(const std::vector<int>& arr, int index) {
    if (index == 0) {
        return arr[0];
    }
    
    int maxRest = findMax(arr, index - 1);
    return (arr[index] > maxRest) ? arr[index] : maxRest;
}

int main() {
    int n;
    std::cin >> n;
    
    std::vector<int> numbers(n);
    for (int i = 0; i < n; i++) {
        std::cin >> numbers[i];
    }
    
    int maxValue = findMax(numbers, n - 1);
    
    std::cout << maxValue << std::endl;
    
    return 0;
}