#include <iostream>
#include <string>
using namespace std;

class Date {
private:
    int month;
    int day;
    int year;

public:
    Date(int m, int d, int y) {
        month = m;
        day = d;
        year = y;
    }

    
    void print_mm_dd_yyyy() {
        cout << month << "/" << day << "/" << year << endl;
    }

  
    void print_month_dd_yyyy() {
          string months[12] = {"January", "February", "March", "April", "May", "June",
                                  "July", "August", "September", "October", "November", "December"};
           cout << months[month - 1] << " " << day << ", " << year << endl;
    }

  
    void print_dd_month_yyyy() {
         string months[12] = {"January", "February", "March", "April", "May", "June",
                                  "July", "August", "September", "October", "November", "December"};
         cout << day << " " << months[month - 1] << " " << year << endl;
    }
};

int main() {
    int month, day, year;


    do {
        cout << "Enter month (1-12): ";
        cin >> month;
    } while (month < 1 || month > 12);


    do {
        cout << "Enter day (1-31): ";
        cin >> day;
    } while (day < 1 || day > 31);

    
     cout << "Enter year: ";
      cin >> year;


    Date date(month, day, year);

    
    cout << "Date in mm/dd/yyyy format: ";
    date.print_mm_dd_yyyy();

     cout << "Date in Month dd, yyyy format: ";
    date.print_month_dd_yyyy();

    cout << "Date in dd Month yyyy format: ";
    date.print_dd_month_yyyy();

     return 0;
}
