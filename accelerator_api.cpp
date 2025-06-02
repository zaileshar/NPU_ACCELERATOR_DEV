#include <iostream>

class Accelerator_api {
public:
    void printStatus() {
        std::cout << "Accelerator_api initialized." << std::endl;
    }
};
// Fixed identified race condition
