#include <iostream>
#include <vector>
void pop_vector(std::vector<int>& v);

int main() {
    std::vector<int> v{1, 2, 3};

    try {
        pop_vector(v);
    }
    catch (std::string s) {
        std::cout << s << std::endl;
    }

    return 0;
}

void pop_vector(std::vector<int>& v) {
    while (true) {
        if (v.size() <= 0)
            throw std::string("vector underflow");
        
        v.pop_back();
    }
}
