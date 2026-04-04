#ifndef BIGINT_H
#define BIGINT_H

#include <vector>
#include <iostream>
#include <algorithm>

class BigInt {
public:
    std::vector<int> digits; // Цифры хранятся в обратном порядке

    BigInt(long long n = 0);
    void print() const;

    // Операторы для длинной арифметики
    BigInt operator+(const BigInt& other) const;
    BigInt operator-(const BigInt& other) const;
    BigInt operator*(int n) const;
    
    static BigInt powerOfTwo(int n);
};

#endif