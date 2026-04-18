#include <iostream>
#include "logic.h"

#ifdef _WIN32
#include <windows.h>
#endif

int main() {
    #ifdef _WIN32
    SetConsoleOutputCP(CP_UTF8);   // ← вот это главное
    SetConsoleCP(CP_UTF8);         // для корректного ввода тоже
    #endif

    int a = 43;
    int b = -8;
    
    std::cout << "Делимое: " << a << ", Делитель: " << b << std::endl;
    std::cout << "Результат custom_divide: " << custom_divide(a, b) << std::endl;
    std::cout << "Ожидаемый результат: " << (a / b) << std::endl;

    return 0;
}