#include <iostream>

int main(){
    int factorial;
    std::cout << "Your factorial is? : " << std::endl;
    std::cin >> factorial;
    for(int i = factorial - 1; i > 1; i--){
        factorial = factorial * i;
    }
    std::cout << "The answer is : " << factorial << std::endl;
}