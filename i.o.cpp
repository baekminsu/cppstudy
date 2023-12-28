#include <iostream>

int main() {

    const char* a;
    a = "Hello World";

    std::cout << a << std::endl;

    char b;
    std::cin >> b;
    std::cout << b << std::endl;

    char c[50];

    std::cin >> c;
    
    for (int i = 0; i < 8; i++) {
        std::cout << c[i];
    }


    return 0;
}