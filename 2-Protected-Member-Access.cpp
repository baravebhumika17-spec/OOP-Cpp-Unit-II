#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    string name;

public:
    Employee(string employeeName) {
        name = employeeName;
    }
};

class Developer : public Employee {
private:
    string language;

public:
    Developer(string employeeName, string programmingLanguage)
        : Employee(employeeName) {
        language = programmingLanguage;
    }

    void display() const {
        cout << "Developer: " << name << endl;
        cout << "Language: " << language << endl;
    }
};

int main() {
    Developer developer("Bhumika", "C++");

    developer.display();

    return 0;
}
