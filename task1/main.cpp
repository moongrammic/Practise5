#include <iostream>
#include "BigInt.h"

#ifdef _WIN32
#include <windows.h>
#endif


int main() {
    #ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);   // ← вот это главное
    SetConsoleCP(CP_UTF8);         // для корректного ввода тоже
    #endif

    
    BigInt a(123456789);
    BigInt b(987654321);
    
    std::cout << "Число A: "; a.print();
    std::cout << "Число B: "; b.print();
    
    BigInt sum = a + b;
    std::cout << "Сумма (A + B): "; sum.print();
    
    return 0;
}