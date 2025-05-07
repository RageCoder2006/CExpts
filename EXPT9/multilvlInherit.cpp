#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;
};

class Student : public Person {
public:
    int rollNo;
    float marks;
};

class Graduate : public Student {
public:
    string status;

    void input() {
        cout << "Enter Name: ";
        cin.ignore();
        getline(cin, name);
        cout << "Enter Age: ";
        cin >> age;
        cout << "Enter Roll Number: ";
        cin >> rollNo;
        cout << "Enter Marks (out of 100): ";
        cin >> marks;
        cout << "Enter Employment Status (Working/Non-Working): ";
        cin >> status;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << ", Roll No: " << rollNo
             << ", Marks: " << marks << ", Status: " << status << endl;
    }
};

int main() {
    int n = 2;
    Graduate g[n];

    cout << "Enter details of " << n << " graduates:\n";
    for (int i = 0; i < n; i++) {
        cout << "\nGraduate " << i + 1 << ":\n";
        g[i].input();
    }

    cout << "\nWorking Graduates:\n";
    for (int i = 0; i < n; i++) {
        if (g[i].status == "Working") {
            g[i].display();
        }
    }

    cout << "\nNon-Working Graduates:\n";
    for (int i = 0; i < n; i++) {
        if (g[i].status == "Non-Working") {
            g[i].display();
        }
    }

    int topIndex = 0;
    for (int i = 1; i < n; i++) {
        if (g[i].marks > g[topIndex].marks) {
            topIndex = i;
        }
    }

    cout << "\nTop Scorer:\n";
    g[topIndex].display();

    float total = 0;
    for (int i = 0; i < n; i++) {
        total += g[i].marks;
    }
    cout << "\nAverage Marks: " << total / n << endl;

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (g[i].status == "Non-Working" && g[i].marks >= 60) {
            count++;
        }
    }

    float percent = ((float)count / n) * 100;
    cout << "Percentage of Non-Working First Divisioners: " << percent << "%\n";

    return 0;
}
