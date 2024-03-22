#include <iostream>
#include <string>
using namespace std;
class PersonalInformation {
private:
    string name;
    string address;
    int age;
    string phoneNumber;

public:
    
   string getName() const {
        return name;
    }

    string getAddress() const {
        return address;
    }

    int getAge() const {
        return age;
    }

     string getPhoneNumber() const {
        return phoneNumber;
    }

    
    void setName(string n) {
        name = n;
    }

    void setAddress(string addr) {
        address = addr;
    }

    void setAge(int a) {
        age= a;
        
    }

    void setPhoneNumber(string phone) {
        phoneNumber = phone;
    }
};

int main() {
    PersonalInformation person1,person2,person3;
    string name;
    string address;
    int age;
    string phoneNumber;

    
    cout << "Personal Information:\n";
    cout << "Person 1:\n";
    cout << "Name: " << person1.getName() << endl;
    cout << "Address: " << person1.getAddress() << endl;
    cout << "Age: " << person1.getAge() << endl;
    cout << "Phone Number: " << person1.getPhoneNumber() << endl;
    cout << endl;

   cout << "Person 2:\n";
    cout << "Name: " << person2.getName() << endl;
    cout << "Address: " << person2.getAddress() << endl;
    cout << "Age: " << person2.getAge() << endl;
    cout << "Phone Number: " << person2.getPhoneNumber() << endl;
    cout << endl;

    cout << "Person 3:\n";
    cout << "Name: " << person3.getName() << endl;
    cout << "Address: " << person3.getAddress() << endl;
    cout << "Age: " << person3.getAge() << endl;
    cout << "Phone Number: " << person3.getPhoneNumber() << endl;

    
}
