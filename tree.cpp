#include <iostream>
#include<string>

int main() {
    int n;
    std::cin >> n; 
    int spaces = n-1;
    int stars = 3; 
    std::string s = std::string(n, ' ') + std::string(1, '*') + std::string(n,' ');
    std::cout << s << std::endl;
    for (int i = 1; i < n; i++) {
        std::cout << std::string(spaces, ' ');
        std::cout << std::string(stars, '*');
        std::cout << std::string(spaces,' ');
        std::cout << std::endl;
        stars=stars+2;
        spaces--;
    }
    std::cout << s << std::endl; 
}
