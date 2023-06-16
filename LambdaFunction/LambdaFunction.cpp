#include <iostream>

#include <vector>
#include <algorithm>

int main() {

    std::vector<int> arr = { 4, 7, 9, 14, 12 };

    std::for_each(arr.begin(), arr.end(), [](int& num) {
        if (num % 2 != 0) {
            num *= 3;
        }});

    for (int num : arr) {
        std::cout << num << " ";
    }

    std::cout << std::endl;

    return 0;
}