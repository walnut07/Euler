#include <iostream>

int main() {
//    Problem 2: https://projecteuler.net/problem=2
    int sum = 0;
    int prev = 1;

    for (int curr = 2; curr < 4000000; curr += prev) {
        if (curr % 2 == 0) {
            sum += curr;
        }
        prev = curr - prev;
    }
    std::cout << sum << std::endl;

    return 0;
}