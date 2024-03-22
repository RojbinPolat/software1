#include <iostream>
#include <string>
using namespace std;
class Car {
private:
    int yearModel;
    string make;
    int speed;

public:

    Car(int year, string brand) {
        yearModel = year;
        make = brand;
        speed = 0;
    }


    int getYearModel() const {
        return yearModel;
    }

    string getMake() const {
        return make;
    }

    int getSpeed() const {
        return speed;
    }


    void accelerate() {
        speed += 5;
    }

  
    void brake() {
        if (speed >= 5)
            speed -= 5;
        else
            speed = 0;
    }
};

int main() {

    Car myCar(2022, "Toyota");

 
    cout << "Accelerating...\n";
    for (int i = 0; i < 5; ++i) {
        myCar.accelerate();
        std::cout << "Current speed: " << myCar.getSpeed() << " mph\n";
    }


    cout << "\nBraking...\n";
    for (int i = 0; i < 5; ++i) {
        myCar.brake();
        cout << "Current speed: " << myCar.getSpeed() << " mph\n";
    }


}
