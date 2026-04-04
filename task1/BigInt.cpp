#include <iostream>
#include "long_arithmetic.h"
#include <vector>

std::vector<int> add_long_numbers(const std::vector<int>& a, const std::vector<int>& b) {
    std::vector<int> result;
    int carry = 0;
    int i = a.size() - 1;
    int j = b.size() - 1;

    while (i >= 0 || j >= 0 || carry > 0) {
        int sum = carry;
        if (i >= 0) sum += a[i--];
        if (j >= 0) sum += b[j--];
        result.insert(result.begin(), sum % 10);
        carry = sum / 10;
    }
    return result;
}

void print_long_number(const std::vector<int>& num) {
    for (int digit : num) {
        std::cout << digit;
    }
    std::cout << std::endl;
}