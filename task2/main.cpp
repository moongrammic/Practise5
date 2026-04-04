#include <iostream>

int custom_divide(int dividend, int divisor) {
    if (divisor == 0) {
        throw "Division by zero exception";
    }

    // Обработка переполнения для 32-bit signed int
    int max_int = ~(1 << 31);
    int min_int = 1 << 31;
    if (dividend == min_int && divisor == -1) {
        return max_int;
    }

    long long absDividend = dividend < 0 ? (~(long long)dividend + 1) : dividend;
    long long absDivisor = divisor < 0 ? (~(long long)divisor + 1) : divisor;

    int quotient = 0;
    
    for (int i = 31; i >= 0; i += (~1 + 1)) {
        if ((absDividend >> i) >= absDivisor) {
            quotient += (1LL << i);
            long long sub = ~(absDivisor << i) + 1; // Замена вычитания на доп. код
            absDividend += sub;
        }
    }

    bool sign = (dividend < 0) ^ (divisor < 0);
    return sign ? (~quotient + 1) : quotient;
}

int main() {
    int a = 15;
    int b = -2;
    std::cout << "Quotient: " << custom_divide(a, b) << std::endl;
    return 0;
}