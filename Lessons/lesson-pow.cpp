#include <iostream>
#include <cmath>

int main() {

    int base;
    int extention;

    std::cout << "Base is equal: ";
    std::cin >> base;
    
    std::cout << "Extention is equal: ";
    std::cin >> extention;
    

    std::cout << pow(base,extention) << std::endl;
}

