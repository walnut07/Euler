#include <iostream>

int main() {
    // Problem 1: https://projecteuler.net/problem=1
    int sum = 0;
    for (int i; i < 1000; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            sum += i;
        }
    }
    std::cout << sum << std::endl;

    return 0;
}