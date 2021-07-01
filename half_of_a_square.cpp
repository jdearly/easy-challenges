#include <iostream>

int main() {
    int sw = 10;
    int sh = 10;

    for (int i = 0; i < sh; i++) {
        for (int j = 0; j < sw; j++) {
            std::cout << "#";
        }
        std::cout << std::endl;
        sw--;
    }
}
