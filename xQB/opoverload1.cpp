#include <iostream>
using namespace std;

class dist {
public:
    float feet, inches;

    dist(float f = 0, float i = 0) {
        feet = f;
        inches = i;
    }

    dist operator+(dist d) {
        dist res;
        res.feet = feet + d.feet;
        res.inches = inches + d.inches;
        return res;
    }

    void display() {
        cout << feet << "ft " << inches << "in" << endl;
    }
};

int main() {
    dist d1(25, 25);
    dist d2(25, 25);
    dist d3 = d1 + d2;
    d3.display();
}
