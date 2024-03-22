#include <iostream>
#include <cstdlib>
#include <ctime>   
using namespace std;
class Coin {
private:
    std::string sideup;

public:
    Coin() {
        
        srand(static_cast<unsigned int>(time(0)));


        int randomValue = rand() % 2;
        if (randomValue == 0)
            sideup = "heads";
        else
            sideup = "tails";
    }

    void toss() {
    
        int randomValue = rand() % 2;
        if (randomValue == 0)
            sideup = "heads";
        else
            sideup = "tails";
    }

    string getSideup() const {
        return sideup;
    }
};

int main() {
    Coin coin;
 cout << "Initially facing side: " << coin.getSideup() <<endl;

    int headsCount = 0;
    int tailsCount = 0;

    
    for (int i = 0; i < 20; ++i) {
        coin.toss();
        cout << "After toss " << i + 1 << ", facing side: " << coin.getSideup() << endl;
        
        
        if (coin.getSideup() == "heads")
            headsCount++;
        else
            tailsCount++;
    }

    
    cout << "\nNumber of times heads faced up: " << headsCount << endl;
    cout << "Number of times tails faced up: " << tailsCount << endl;
}
