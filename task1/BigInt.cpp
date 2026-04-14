#include "BigInt.h"
#include <iostream>
#include <algorithm>
#include <vector>

// Конструктор: аргумент long long, как в .h
BigInt::BigInt(long long n) {
    digits.clear();
    if (n == 0) digits.push_back(0);
    while (n > 0) {
        digits.push_back(n % 10);
        n /= 10;
    }
}

// Метод печати: принадлежит классу
void BigInt::print() const {
    if (digits.empty()) {
        std::cout << 0;
    } else {
        for (int i = (int)digits.size() - 1; i >= 0; i--) {
            std::cout << digits[i];
        }
    }
    std::cout << std::endl;
}

// Оператор сложения: принадлежит классу
BigInt BigInt::operator+(const BigInt& other) const {
    BigInt res;
    res.digits.clear();
    int carry = 0;
    size_t n = std::max(digits.size(), other.digits.size());
    
    for (size_t i = 0; i < n || carry; i++) {
        int d1 = i < digits.size() ? digits[i] : 0;
        int d2 = i < other.digits.size() ? other.digits[i] : 0;
        int sum = d1 + d2 + carry;
        res.digits.push_back(sum % 10);
        carry = sum / 10;
    }
    return res;
}

// Заглушки для остальных операторов, чтобы не было ошибок линковки
BigInt BigInt::operator-(const BigInt& other) const { return *this; }
BigInt BigInt::operator*(int n) const { return *this; }
BigInt BigInt::powerOfTwo(int n) { return BigInt(0); }