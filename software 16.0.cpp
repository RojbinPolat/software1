#include <iostream>
using namespace std;
class Temperature {
private:
    double temperature;

public:
    Temperature(double temp = 0.0) : temperature(temp) {}

    double getTemperature() const {
        return temperature;
    }

    void setTemperature(double temp) {
        temperature = temp;
    }

    bool isEthylFreezing() const {
        return temperature <= -114.1;
    }

    bool isEthylBoiling() const {
        return temperature >= 78.37;
    }

    bool isOxygenFreezing() const {
        return temperature <= -218.8;
    }

    bool isOxygenBoiling() const {
        return temperature >= -183;
    }

    bool isWaterFreezing() const {
        return temperature <= 0;
    }

    bool isWaterBoiling() const {
        return temperature >= 100;
    }
};

int main() {
    double temp;
    cout << "Enter the temperature in Celsius: ";
    cin >> temp;

    Temperature t(temp);

    cout << "\nAt " << temp << "�C:\n";

    if (t.isEthylFreezing()) {
        cout << "Ethyl alcohol will freeze.\n";
    }

    if (t.isEthylBoiling()) {
        cout << "Ethyl alcohol will boil.\n";
    }

    if (t.isOxygenFreezing()) {
        cout << "Oxygen will freeze.\n";
    }

    if (t.isOxygenBoiling()) {
        cout << "Oxygen will boil.\n";
    }

    if (t.isWaterFreezing()) {
        cout << "Water will freeze.\n";
    }

    if (t.isWaterBoiling()) {
        cout << "Water will boil.\n";
    }
}
