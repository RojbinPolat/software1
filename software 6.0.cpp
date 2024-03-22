#include <iostream>
using namespace std;
class Inventory {
private:
    int itemNumber;
    int quantity;
    double cost;
    double totalCost;

public:
    
    Inventory() {
        itemNumber = 0;
        quantity = 0;
        cost = 0.0;
        totalCost = 0.0;
    }

    
    Inventory(int itemNum, double itemCost, int itemQuantity) {
        itemNumber = itemNum;
        cost = (itemCost >= 0) ? itemCost : 0.0;
        quantity = (itemQuantity >= 0) ? itemQuantity : 0;
        setTotalCost();
    }

    
    void setItemNumber(int num) {
        itemNumber = (num >= 0) ? num : 0;
    }

    void setQuantity(int quant) {
        quantity = (quant >= 0) ? quant : 0;
        setTotalCost();
    }

    void setCost(double itemCost) {
        cost = (itemCost >= 0) ? itemCost : 0.0;
        setTotalCost();
    }

    void setTotalCost() {
        totalCost = quantity * cost;
    }

    int getItemNumber() const {
        return itemNumber;
    }

    int getQuantity() const {
        return quantity;
    }

    double getCost() const {
        return cost;
    }

    double getTotalCost() const {
        return totalCost;
    }
};

int main() {

    Inventory item1(146, 6.79, 12);
    
     cout << "Item Number: " << item1.getItemNumber() << endl;
     cout << "Quantity: " << item1.getQuantity() <<  endl;
     cout << "Cost per item: $" << item1.getCost() <<  endl;
     cout << "Total Cost: $" << item1.getTotalCost() <<  endl;
    
    
    item1.setQuantity(16);
    item1.setCost(7.50);
    
    cout << "\nAfter updating quantity and cost:\n";
    cout << "Item Number: " << item1.getItemNumber() << endl;
    cout << "Quantity: " << item1.getQuantity() << endl;
    cout << "Cost per item: $" << item1.getCost() << endl;
    cout << "Total Cost: $" << item1.getTotalCost() << endl;
    
    
}
