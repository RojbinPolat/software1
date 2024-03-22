#include <iostream>
#include <string>
using namespace std;
class RetailItem {
private:
    string description;
    int unitsOnHand;
    double price;

public:
    
    RetailItem(string description, int unitsOnHand, double price) {
        this->description = description;
        this->unitsOnHand = unitsOnHand;
        this->price = price;
    }

    
    void setDescription(string description) {
        this->description = description;
    }

    void setUnitsOnHand(int unitsOnHand) {
        this->unitsOnHand = unitsOnHand;
    }

    void setPrice(double price) {
        this->price = price;
    }

    
    string getDescription() const {
        return description;
    }

    int getUnitsOnHand() const {
        return unitsOnHand;
    }

    double getPrice() const {
        return price;
    }
};

int main() {
    
    RetailItem item1("hat", 10, 19.99);
    RetailItem item2("jeans", 20, 29.99);
    RetailItem item3("Socks", 15, 09.99);

    
    cout << "Description\tUnits on Hand\tPrice\n";
    cout << "---------------------------------------\n";
    cout << item1.getDescription() << "\t\t" << item1.getUnitsOnHand() << "\t\t$" << item1.getPrice() << "\n";
    cout << item2.getDescription() << "\t\t" << item2.getUnitsOnHand() << "\t\t$" << item2.getPrice() << "\n";
    cout << item3.getDescription() << "\t\t" << item3.getUnitsOnHand() << "\t\t$" << item3.getPrice() << "\n";

    return 0;
}

