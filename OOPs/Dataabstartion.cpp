// Data Abstraction


// Abstration is the process which simplyfing the coputer object
// by focusing on essential feaatures while hinding unnecessary
// details


#include <iostream>
class Car {
private:
    bool isEngineStarted;

public:
   
    Car() : isEngineStarted(false) {}
    void start() {
        if (!isEngineStarted) {
            isEngineStarted = true;
            std::cout << "Car engine started." << std::endl;
        } else {
            std::cout << "Car engine is already running." << std::endl;
        }
    }

    void drive() {
        if (isEngineStarted) {
            std::cout << "Car is moving." << std::endl;
        } else {
            std::cout << "Start the engine first before driving." << std::endl;
        }
    }
};


int main() {
   
    Car myCar;

    myCar.start(); 
    myCar.drive(); 

    myCar.start(); 
    myCar.drive(); 

    return 0;
}
