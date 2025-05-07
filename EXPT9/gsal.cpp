#include <iostream>
using namespace std;

class Employee {
private:
    int empID;
    string name;
    string designation;
    float basicSalary;

public:
    Employee(int id, string n, string desig, float basic) {
        empID = id;
        name = n;
        designation = desig;
        basicSalary = basic;
    }

    float calculateGrossSalary() {
        return basicSalary + (0.2 * basicSalary) + (0.1 * basicSalary);
    }

    void displayDetails() {
        cout << "Employee ID: " << empID << endl;
        cout << "Name: " << name << endl;
        cout << "Designation: " << designation << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "Gross Salary: " << calculateGrossSalary() << endl;
        cout << "--------------------------" << endl;
    }
};

int main() {
    int n;
    cout << "Enter number of employees: ";
    cin >> n;

    Employee* emp[n];

    for (int i = 0; i < n; i++) {
        int id;
        string name, designation;
        float salary;

        cout << "\nEnter details for Employee " << i + 1 << ":\n";
        cout << "Employee ID: ";
        cin >> id;
        cin.ignore();
        cout << "Name: ";
        getline(cin, name);
        cout << "Designation: ";
        getline(cin, designation);
        cout << "Basic Salary: ";
        cin >> salary;

        emp[i] = new Employee(id, name, designation, salary);
    }

    cout << "\nEmployee Details:\n";
    for (int i = 0; i < n; i++) {
        emp[i]->displayDetails();
        delete emp[i];
    }

    return 0;
}
