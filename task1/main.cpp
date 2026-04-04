#include <iostream>
#include "BigInt.h"

int main() {
    setlocale(LC_ALL, "Russian");
    
    BigInt a(123456789);
    BigInt b(987654321);
    
    std::cout << "Число A: "; a.print();
    std::cout << "Число B: "; b.print();
    
    BigInt sum = a + b;
    std::cout << "Сумма (A + B): "; sum.print();
    
    return 0;
}