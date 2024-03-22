#include <iostream>
#include <cassert>
using namespace std;
class NumberArray {
private:
    float* numbers;
    int size;

public:
    NumberArray(int size) : size(size) {
        numbers = new float[size];
    }

    ~NumberArray() {
        delete[] numbers;
    }

    void storeNumber(int index, float value) {
        assert(index >= 0 && index < size);
        numbers[index] = value;
    }

    float retrieveNumber(int index) const {
        assert(index >= 0 && index < size);
        return numbers[index];
    }

    float getHighest() const {
        float highest = numbers[0];
        for (int i = 1; i < size; ++i) {
            if (numbers[i] > highest) {
                highest = numbers[i];
            }
        }
        return highest;
    }

    float getLowest() const {
        float lowest = numbers[0];
        for (int i = 1; i < size; ++i) {
            if (numbers[i] < lowest) {
                lowest = numbers[i];
            }
        }
        return lowest;
    }

    float getAverage() const {
        float sum = 0;
        for (int i = 0; i < size; ++i) {
            sum += numbers[i];
        }
        return sum / size;
    }
};

int main() {
    NumberArray arr(5);

    
    arr.storeNumber(0, 34.6);
    arr.storeNumber(1, 20.8);
    arr.storeNumber(2, 15.7);
    arr.storeNumber(3, 5.4);
    arr.storeNumber(4, 8.1);

    
    cout << "Number at index 2: " << arr.retrieveNumber(2) << endl;

    
    cout << "Highest number: " << arr.getHighest() << endl;
    cout << "Lowest number: " << arr.getLowest() << endl;
    cout << "Average: " << arr.getAverage() << endl;
}
