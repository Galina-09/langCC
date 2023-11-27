#include <iostream>
#include <string> // Додано правильний заголовок для рядка

int main() {
    std::cout << "Hello world!" << 5 + 6 << std::endl;
    std::string a; // Додано простір імен std
    std::getline(std::cin, a); // Замінено std::cin.getline(a);
    std::cout << a+'3';
    return 0;
}
