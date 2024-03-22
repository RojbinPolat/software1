#include <iostream>
#include <string>
using namespace std;
class Employee {
private:
    string name;
    int idNumber;
	string department;
    string position;

public:
    
    Employee(string name, int idNumber, string department, string position) {
        this->name = name;
        this->idNumber = idNumber;
        this->department = department;
        this->position = position;
    }

    Employee(string name, int idNumber) {
        this->name = name;
        this->idNumber = idNumber;
        this->department = "";
        this->position = "";
    }

    Employee() {
        name = "";
        idNumber = 0;
        department = "";
        position = "";
    }

    
    void setName(string name) {
        this->name = name;
    }

    void setIdNumber(int idNumber) {
        this->idNumber = idNumber;
    }

    void setDepartment(string department) {
        this->department = department;
    }

    void setPosition(string position) {
        this->position = position;
    }


    string getName() const {
        return name;
    }

    int getIdNumber() const {
        return idNumber;
    }

    string getDepartment() const {
        return department;
    }

    string getPosition() const {
        return position;
    }
};

int main() {
    
    Employee emp1("neval polat", 12345, "Engineering", "Computer Engineer");
    Employee emp2("rojbin polat", 54321);
    emp2.setDepartment("Engineering");
    emp2.setPosition("Software developer");
    Employee emp3;

    
    cout << "Name\t\tID Number\tDepartment\tPosition\n";
    cout << "--------------------------------------------------\n";
    cout << emp1.getName() << "\t" << emp1.getIdNumber() << "\t\t" << emp1.getDepartment() << "\t\t" << emp1.getPosition() << "\n";
    cout << emp2.getName() << "\t" << emp2.getIdNumber() << "\t\t" << emp2.getDepartment() << "\t\t" << emp2.getPosition() << "\n";
    cout << emp3.getName() << "\t\t" << emp3.getIdNumber() << "\t\t" << emp3.getDepartment() << "\t\t" << emp3.getPosition() << "\n";

    
}

