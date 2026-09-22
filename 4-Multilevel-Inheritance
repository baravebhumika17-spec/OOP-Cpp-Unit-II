#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
    string name;

public:
    Person(string personName) {
        name = personName;
    }

    void showPerson() const {
        cout << "Name: " << name << endl;
    }
};

class Employee : public Person {
protected:
    int employeeId;

public:
    Employee(string employeeName, int id)
        : Person(employeeName) {
        employeeId = id;
    }

    void showEmployee() const {
        cout << "Employee ID: " << employeeId << endl;
    }
};

class Manager : public Employee {
private:
    int teamSize;

public:
    Manager(string managerName, int id, int size)
        : Employee(managerName, id) {
        teamSize = size;
    }

    void showManager() const {
        showPerson();
        showEmployee();
        cout << "Team Size: " << teamSize << endl;
    }
};

int main() {
    Manager manager("Bhumika", 501, 5);

    manager.showManager();

    return 0;
}
