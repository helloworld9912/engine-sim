#include <iostream>

extern "C" {
    int main() {
        std::cout << "Hello from WebAssembly!" << std::endl;
        return 0;
    }
}
