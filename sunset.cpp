#include <iostream>
#include <vector>
#include <string>

int main() {
    std::vector<int> vec{3,5,4,4,3,1,3,2};
    std::string direction = "EAST";
    std::vector<int> result;
    int max = 0;
    if(direction == "EAST") {
        for(int i = vec.size()-1; i > 0; --i) {
            if(vec[i] > max) { 
                max = vec[i];
                result.push_back(i);
            }
        }
        for(int j = result.size()-1; j >= 0; --j) {
            std::cout << result[j] << " ";
        }
        std::cout << std::endl;
    } else if (direction == "WEST") {
        for(int i = 0; i < vec.size(); ++i) {
            if(vec[i] > max) {
                max = vec[i];
                result.push_back(i);
                std::cout << i << " ";
            }
        }
        std::cout << std::endl;
    }
}
