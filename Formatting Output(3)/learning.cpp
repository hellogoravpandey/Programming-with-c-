#include <iostream>
#include <iomanip>

int main() {
    int width{20};
    std::cout << std::left;

    // Table header
    std::cout << std::setw(width) << "**S.no**"
              << std::setw(width) << "**Name**"
              << std::setw(width) << "**Marks**" << std::endl;

    // Data rows   define width first then attributes 
    std::cout << "1"
              << std::setw(width) << "John"
              << std::setw(width) << "20" << std::endl;
    std::cout << std::setw(width) << "2"
              << std::setw(width) << "Alice"
              << std::setw(width) << "Marks" << std::endl;
    std::cout << std::setw(width) << "3"
              << std::setw(width) << "Bob"
              << std::setw(width) << "Marks" << std::endl;

    return 0;
}
